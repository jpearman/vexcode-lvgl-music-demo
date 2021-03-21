/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       james                                                     */
/*    Created:      Sun Mar 21 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "v5lvgl.h"

#define LV_USE_DEMO_MUSIC  1
#include "lv_demo_music.h"

using namespace vex;

int main() {
    v5_lv_init();
    lv_demo_music();

    while(1)
      this_thread::sleep_for(10);
}
