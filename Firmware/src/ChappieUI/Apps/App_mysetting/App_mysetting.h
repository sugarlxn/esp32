#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_mysetting_appName();
    void* App_mysetting_appIcon();
    void App_mysetting_onCreate();
    void App_mysetting_onLoop();
    void App_mysetting_onDestroy();
    void App_mysetting_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(mysetting);
}

#endif
