#if 1
#include "App_Myapp1.h"
#include "../../../ChappieBsp/Chappie.h"
#include "UI/ui.h"


static std::string app_name = "Myapp1";
static CHAPPIE* device;


/**
 * @brief Enven call back for Switch1
 * 
 * @param e 
 */
static void ui_event_Switch1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        if (lv_obj_has_state(target, LV_STATE_CHECKED)) {
            UI_LOG("Switch1 ON\n");
        }
        else {
            UI_LOG("Switch1 OFF\n");
        }
    }
}
namespace App {

    /**
     * @brief Return the App name laucnher, which will be show on launcher App list
     * 
     * @return std::string 
     */
    std::string App_Myapp1_appName()
    {
        return app_name;
    }


    /**
     * @brief Return the App Icon laucnher, NULL for default
     * 
     * @return void* 
     */
    void* App_Myapp1_appIcon()
    {
        return NULL;
    }


    /**
     * @brief Called when App is on create
     * 
     */
    void App_Myapp1_onCreate()
    {
        UI_LOG("[%s] onCreate\n", App_Myapp1_appName().c_str());

        /*Create an Arc*/
        lv_obj_t * arc = lv_arc_create(lv_scr_act());
        lv_obj_set_size(arc, 150, 150);
        lv_arc_set_rotation(arc, 135);
        lv_arc_set_bg_angles(arc, 0, 270);
        lv_arc_set_value(arc, 40);
        lv_obj_center(arc);

        //initial app1
        myapp_ui_init();
        lv_obj_add_event_cb(ui_Switch1, ui_event_Switch1, LV_EVENT_ALL, NULL);
    }


    /**
     * @brief Called repeatedly, end this function ASAP! or the App management will be affected
     * If the thing you want to do takes time, try create a taak or lvgl timer to handle them.
     * Try use millis() instead of delay() here
     * 
     */
    void App_Myapp1_onLoop()
    {
    }


    /**
     * @brief Called when App is about to be destroy
     * Please remember to release the resourse like lvgl timers in this function
     * 
     */
    void App_Myapp1_onDestroy()
    {
        UI_LOG("[%s] onDestroy\n", App_Myapp1_appName().c_str());
    }


    /**
     * @brief Launcher will pass the BSP pointer through this function before onCreate
     * 
     */
    void App_Myapp1_getBsp(void* bsp)
    {
        device = (CHAPPIE*)bsp;
    }
    
}

#endif
