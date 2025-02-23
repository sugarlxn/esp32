#if 1
#pragma once
#include "../AppTypedef.h"
#include "../../ChappieUIConfigs.h"

/**
 * @brief Create an App in name space 
 * 
 */
namespace App {

    std::string App_Myapp1_appName();
    void* App_Myapp1_appIcon();
    void App_Myapp1_onCreate();
    void App_Myapp1_onLoop();
    void App_Myapp1_onDestroy();
    void App_Myapp1_getBsp(void* bsp);

    /**
     * @brief Declace your App like this 
     * 
     */
    App_Declare(Myapp1);
}

#endif
