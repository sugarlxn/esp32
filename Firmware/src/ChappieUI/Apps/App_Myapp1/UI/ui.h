// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: ChappieUI_Launcher

#ifndef _MYAPP1_UI_H
#define _MYAPP1_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


void StateBarDropDown_Animation(lv_obj_t * TargetObject, int delay);
void StateBarPullUp_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Myapp1
void ui_Myapp1_Screeen_init(void);
extern lv_obj_t * ui_Myapp1;
extern lv_obj_t * ui_testapp;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_saying;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_1385334836);    // assets/小黑-刀.png




LV_FONT_DECLARE(ui_font_FontUbuntuBold16);
LV_FONT_DECLARE(ui_font_FontUbuntuBold18);
LV_FONT_DECLARE(ui_font_FontUbuntuBold96);


void myapp_ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
