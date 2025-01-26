#include <Arduino.h>
#include <lvgl.h>
#include <ESP32Encoder.h>

ESP32Encoder encoder;

// Pin definition
#define EC11_A_PIN 34
#define EC11_B_PIN 36
#define EC11_K_PIN 39

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void encoder_init(void);
static void encoder_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data);
static void encoder_handler(void);

/**********************
 *  STATIC VARIABLES
 **********************/
lv_indev_t *indev_encoder;
static int32_t encoder_diff;
static lv_indev_state_t encoder_state;

lv_indev_drv_t indev_drv;
lv_group_t *group;

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_port_indev_init(void)
{

    /*------------------
     * Encoder
     * -----------------*/

    /*Initialize your encoder if you have*/
    encoder_init();

    /*Register a encoder input device*/
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_ENCODER;

    indev_drv.read_cb = encoder_read;
    indev_encoder = lv_indev_drv_register(&indev_drv);

    /* Create input device group */
    group = lv_group_create();
    lv_group_set_default(group);
    lv_indev_set_group(indev_encoder, group);
}

/*------------------
 * Encoder
 * -----------------*/

/* Initialize your keypad */
static void encoder_init(void)
{
    /*Your code comes here*/
    ESP32Encoder::useInternalWeakPullResistors = puType::up;
    encoder.attachSingleEdge(EC11_A_PIN, EC11_B_PIN);
    encoder.setCount(0);

    pinMode(EC11_K_PIN, INPUT_PULLUP);
}

/*Will be called by the library to read the encoder*/
static void encoder_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data)
{
    encoder_handler();
    data->enc_diff = encoder_diff;
    data->state = encoder_state;

    Serial.printf("x: %d,y: %d\n", data->enc_diff, data->state);
}

/*Call this function in an interrupt to process encoder events (turn, press)*/
static void encoder_handler(void)
{
    static int last_count = 0;

    encoder_state = LV_INDEV_STATE_REL;
    encoder_diff = 0;

    if (encoder.getCount() != last_count)
    {
        encoder_state = LV_INDEV_STATE_REL;
        if (encoder.getCount() - last_count > 0)
        {
            encoder_diff = -1;
        }
        else if (encoder.getCount() - last_count < 0)
        {
            encoder_diff = 1;
        }
        last_count = encoder.getCount();
    }

    if (digitalRead(EC11_K_PIN) == LOW)
    {
        encoder_state = LV_INDEV_STATE_PR;
    }
    else if (digitalRead(EC11_K_PIN) == HIGH)
    {
        encoder_state = LV_INDEV_STATE_REL;
    }
}
