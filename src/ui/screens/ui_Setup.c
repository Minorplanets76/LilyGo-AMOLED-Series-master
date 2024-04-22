// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Setup_screen_init(void)
{
    ui_Setup = lv_obj_create(NULL);
    lv_obj_add_state(ui_Setup, LV_STATE_PRESSED);       /// States
    lv_obj_add_flag(ui_Setup, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Setup, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags

    ui_Test_Button2 = lv_btn_create(ui_Setup);
    lv_obj_set_width(ui_Test_Button2, 60);
    lv_obj_set_height(ui_Test_Button2, 60);
    lv_obj_set_x(ui_Test_Button2, -177);
    lv_obj_set_y(ui_Test_Button2, -198);
    lv_obj_set_align(ui_Test_Button2, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Test_Button2, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_Test_Button2, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Test_Button2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Test_Button2, lv_color_hex(0x09BC11), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Test_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Test_Button2, &ui_img_contactless_fill0_wght500_grad0_opsz48_png,
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Test_Button2, &ui_img_contactless_off_fill0_wght500_grad0_opsz48_png,
                                LV_PART_MAIN | LV_STATE_CHECKED);

    ui_RFIDScanner = lv_imgbtn_create(ui_Setup);
    lv_imgbtn_set_src(ui_RFIDScanner, LV_IMGBTN_STATE_RELEASED, NULL,
                      &ui_img_contactless_off_fill0_wght500_grad0_opsz48_png, NULL);
    lv_imgbtn_set_src(ui_RFIDScanner, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_contactless_fill0_wght500_grad0_opsz48_png,
                      NULL);
    lv_imgbtn_set_src(ui_RFIDScanner, LV_IMGBTN_STATE_DISABLED, NULL,
                      &ui_img_contactless_off_fill0_wght500_grad0_opsz48_png, NULL);
    lv_imgbtn_set_src(ui_RFIDScanner, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL,
                      &ui_img_contactless_off_fill0_wght500_grad0_opsz48_png, NULL);
    lv_imgbtn_set_src(ui_RFIDScanner, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL,
                      &ui_img_contactless_fill0_wght500_grad0_opsz48_png, NULL);
    lv_obj_set_height(ui_RFIDScanner, 48);
    lv_obj_set_width(ui_RFIDScanner, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_RFIDScanner, -179);
    lv_obj_set_y(ui_RFIDScanner, -42);
    lv_obj_set_align(ui_RFIDScanner, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_RFIDScanner, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_RFIDScanner, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_RFIDScanner, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_border_color(ui_RFIDScanner, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_RFIDScanner, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_RFIDScanner, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Test_Dropdown1 = lv_dropdown_create(ui_Setup);
    lv_dropdown_set_options(ui_Test_Dropdown1, "Unknown\nMale\nFemale");
    lv_obj_set_width(ui_Test_Dropdown1, 150);
    lv_obj_set_height(ui_Test_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Test_Dropdown1, -113);
    lv_obj_set_y(ui_Test_Dropdown1, -116);
    lv_obj_set_align(ui_Test_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Test_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags



    ui_Test_Switch1 = lv_switch_create(ui_Setup);
    lv_obj_set_width(ui_Test_Switch1, 100);
    lv_obj_set_height(ui_Test_Switch1, 60);
    lv_obj_set_x(ui_Test_Switch1, -83);
    lv_obj_set_y(ui_Test_Switch1, -199);
    lv_obj_set_align(ui_Test_Switch1, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Test_Switch1, LV_STATE_CHECKED);       /// States

    lv_obj_set_style_bg_color(ui_Test_Switch1, lv_color_hex(0xE45255), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Test_Switch1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Test_Switch1, &ui_img_contactless_off_fill0_wght500_grad0_opsz48_png,
                                LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Test_Switch1, lv_color_hex(0x56E887), LV_PART_KNOB | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Test_Switch1, 255, LV_PART_KNOB | LV_STATE_CHECKED);
    lv_obj_set_style_bg_img_src(ui_Test_Switch1, &ui_img_contactless_fill0_wght500_grad0_opsz48_png,
                                LV_PART_KNOB | LV_STATE_CHECKED);

    ui_Test_Panel1 = lv_obj_create(ui_Setup);
    lv_obj_set_width(ui_Test_Panel1, 429);
    lv_obj_set_height(ui_Test_Panel1, 219);
    lv_obj_set_x(ui_Test_Panel1, 2);
    lv_obj_set_y(ui_Test_Panel1, 180);
    lv_obj_set_align(ui_Test_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Test_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Test_Info_Bar = lv_obj_create(ui_Setup);
    lv_obj_set_width(ui_Test_Info_Bar, lv_pct(100));
    lv_obj_set_height(ui_Test_Info_Bar, lv_pct(10));
    lv_obj_set_x(ui_Test_Info_Bar, lv_pct(0));
    lv_obj_set_y(ui_Test_Info_Bar, lv_pct(-45));
    lv_obj_set_align(ui_Test_Info_Bar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Test_Info_Bar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Test_Info_Bar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Test_Info_Bar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time = lv_label_create(ui_Test_Info_Bar);
    lv_obj_set_width(ui_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Time, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Time, "12:35AM");
    lv_obj_set_style_text_font(ui_Time, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SDCard = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_SDCard, &ui_img_sd_card_alert_fill0_wght500_grad0_opsz48_png);
    lv_obj_set_width(ui_SDCard, 48);
    lv_obj_set_height(ui_SDCard, 48);
    lv_obj_set_align(ui_SDCard, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SDCard, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SDCard, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RFID = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_RFID, &ui_img_contactless_fill0_wght500_grad0_opsz48_png);
    lv_obj_set_width(ui_RFID, 48);
    lv_obj_set_height(ui_RFID, 48);
    lv_obj_set_x(ui_RFID, -50);
    lv_obj_set_y(ui_RFID, lv_pct(0));
    lv_obj_set_align(ui_RFID, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RFID, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RFID, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WiFi = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_WiFi, &ui_img_wifi_off_png);
    lv_obj_set_width(ui_WiFi, 48);
    lv_obj_set_height(ui_WiFi, 48);
    lv_obj_set_x(ui_WiFi, -100);
    lv_obj_set_y(ui_WiFi, lv_pct(0));
    lv_obj_set_align(ui_WiFi, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WiFi, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WiFi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bluetooth = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_Bluetooth, &ui_img_bluetooth_connected_png);
    lv_obj_set_width(ui_Bluetooth, 48);
    lv_obj_set_height(ui_Bluetooth, 48);
    lv_obj_set_x(ui_Bluetooth, -150);
    lv_obj_set_y(ui_Bluetooth, lv_pct(0));
    lv_obj_set_align(ui_Bluetooth, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Bluetooth, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Bluetooth, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Battery = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_Battery, &ui_img_battery_charging_20_png);
    lv_obj_set_width(ui_Battery, 48);
    lv_obj_set_height(ui_Battery, 48);
    lv_obj_set_x(ui_Battery, -200);
    lv_obj_set_y(ui_Battery, lv_pct(0));
    lv_obj_set_align(ui_Battery, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Battery, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Battery, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WiFIAP = lv_img_create(ui_Test_Info_Bar);
    lv_img_set_src(ui_WiFIAP, &ui_img_wifi_tethering_png);
    lv_obj_set_width(ui_WiFIAP, 48);
    lv_obj_set_height(ui_WiFIAP, 48);
    lv_obj_set_x(ui_WiFIAP, 50);
    lv_obj_set_y(ui_WiFIAP, lv_pct(0));
    lv_obj_set_align(ui_WiFIAP, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WiFIAP, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WiFIAP, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Back1 = lv_btn_create(ui_Setup);
    lv_obj_set_width(ui_Back1, 80);
    lv_obj_set_height(ui_Back1, 80);
    lv_obj_set_x(ui_Back1, -5);
    lv_obj_set_y(ui_Back1, -5);
    lv_obj_set_align(ui_Back1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Back1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_Back1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_Grey);
    ui_object_set_themeable_style_property(ui_Back1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_Grey);
    lv_obj_set_style_bg_grad_color(ui_Back1, lv_color_hex(0x8F8F8F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Back1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Back1, &ui_img_arrow_back_fill0_wght500_grad0_opsz48_png,
                                LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Back1, ui_event_Back1, LV_EVENT_ALL, NULL);

}
