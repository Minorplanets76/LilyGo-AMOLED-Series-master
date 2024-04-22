// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void test_Animation(lv_obj_t * TargetObject, int delay);


// SCREEN: ui_Main
void ui_Main_screen_init(void);
void ui_event_Main(lv_event_t * e);
lv_obj_t * ui_Main;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label1;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label8;
void ui_event_Button6(lv_event_t * e);
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label9;


// SCREEN: ui_Scan
void ui_Scan_screen_init(void);
lv_obj_t * ui_Scan;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Scan_Image1;
void ui_event_Scan_Button2(lv_event_t * e);
lv_obj_t * ui_Scan_Button2;


// SCREEN: ui_Records
void ui_Records_screen_init(void);
lv_obj_t * ui_Records;
void ui_event_Records_Roller4(lv_event_t * e);
lv_obj_t * ui_Records_Roller4;
lv_obj_t * ui_Records_Label4;
void ui_event_Back(lv_event_t * e);
lv_obj_t * ui_Back;


// SCREEN: ui_Setup
void ui_Setup_screen_init(void);
lv_obj_t * ui_Setup;
lv_obj_t * ui_Test_Button2;
lv_obj_t * ui_RFIDScanner;
lv_obj_t * ui_Test_Dropdown1;
lv_obj_t * ui_Test_Switch1;
lv_obj_t * ui_Test_Panel1;
lv_obj_t * ui_Test_Info_Bar;
lv_obj_t * ui_Time;
lv_obj_t * ui_SDCard;
lv_obj_t * ui_RFID;
lv_obj_t * ui_WiFi;
lv_obj_t * ui_Bluetooth;
lv_obj_t * ui_Battery;
lv_obj_t * ui_WiFIAP;
void ui_event_Back1(lv_event_t * e);
lv_obj_t * ui_Back1;


// SCREEN: ui_Test1
void ui_Test1_screen_init(void);
lv_obj_t * ui_Test1;
void ui_event_Test1_Keyboard1(lv_event_t * e);
lv_obj_t * ui_Test1_Keyboard1;
lv_obj_t * ui_Test1_Calendar1;
lv_obj_t * ui_Test1_TextArea2;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_arrow_back_fill0_wght500_grad0_opsz[1] = {&ui_img_arrow_back_fill0_wght500_grad0_opsz48_png};
const lv_img_dsc_t * ui_imgset_battery_charging_[1] = {&ui_img_battery_charging_20_png};
const lv_img_dsc_t * ui_imgset_contactless_fill0_wght500_grad0_opsz[1] = {&ui_img_contactless_fill0_wght500_grad0_opsz48_png};
const lv_img_dsc_t * ui_imgset_contactless_off_fill0_wght500_grad0_opsz[1] = {&ui_img_contactless_off_fill0_wght500_grad0_opsz48_png};
const lv_img_dsc_t * ui_imgset_sd_card_alert_fill0_wght500_grad0_opsz[1] = {&ui_img_sd_card_alert_fill0_wght500_grad0_opsz48_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void test_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Main(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_Scan, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_Scan_screen_init);
    }
}
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Scan, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Scan_screen_init);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Records, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Records_screen_init);
    }
}
void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Setup, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Setup_screen_init);
    }
}
void ui_event_Scan_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 150, 0, &ui_Main_screen_init);
    }
}
void ui_event_Records_Roller4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_Main_screen_init);
    }
}
void ui_event_Back(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 150, 0, &ui_Main_screen_init);
    }
}
void ui_event_Back1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 150, 0, &ui_Main_screen_init);
    }
}
void ui_event_Test1_Keyboard1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Test1_Keyboard1,  ui_Test1_TextArea2);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Main_screen_init();
    ui_Scan_screen_init();
    ui_Records_screen_init();
    ui_Setup_screen_init();
    ui_Test1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Main);
}
