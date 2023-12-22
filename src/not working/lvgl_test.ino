#include <Arduino.h>
#include "globals.h"
#include "M5Dial.h"

#include "lvgl.h"
#include "lv_demo.h"

static const uint16_t screenWidth  = 240;
static const uint16_t screenHeight = 240;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t b1[(screenWidth * screenHeight) / 10];
static lv_color_t b2[(screenWidth * screenHeight) / 10];

void setup() {
    auto cfg = M5.config();
    M5Dial.begin(cfg, true, false);

    lv_init();
    lv_disp_draw_buf_init(&draw_buf,b1,b2,(screenWidth*screenHeight)/10);
    init_display();
    //init_touch();

    
}

void loop() {
    M5Dial.update();
    lv_timer_handler(); delay(5);
}