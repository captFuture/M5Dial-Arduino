//===================================================================== 
//Initialize the input device driver
/* void init_touch() {
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
}

//=====================================================================
// Read the touchpad --------------------------------------------------
void my_touchpad_read(lv_indev_drv_t * indev_driver,
                      lv_indev_data_t * data){
  TouchPoint_t pos = M5.Touch.getPressPoint();
  bool touched = ( pos.x == -1 ) ? false : true;
  if(!touched) {data->state = LV_INDEV_STATE_REL;} 
  else {
    data->state = LV_INDEV_STATE_PR; 
    data->point.x = pos.x;
    data->point.y = pos.y;
    Serial.print(pos.x);Serial.print(" , ");Serial.println(pos.y);
  }
}
//=====================================================================
*/