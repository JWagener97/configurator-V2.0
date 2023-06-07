#include <stdio.h>
#include <nvs_flash.h>          /* NVS flash functions */
#include <sys/param.h>          /* System parameters */
#include "esp_log.h"
#include "I2C.h"
#include "ESP_NOW.h"

#define SYSTEM_TAG  "Config - Debug: "

void app_main(void)
{
    /**
    * @brief The purpose of this code is to handle potential issues with the NVS flash, such as lack of free 
    *        space or the presence of an incompatible flash version. By erasing and reinitializing the flash
    *        in such cases, it ensures that the NVS flash is in a clean and usable state for storing and 
    *        retrieving data.
    */
	esp_err_t ret = nvs_flash_init();       /* Initialize NVS flash*/
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
      ESP_ERROR_CHECK(nvs_flash_erase());
      ret = nvs_flash_init();
    }
    oled_setup();
    while (1)
    {
        oled_display();
    }
    
}