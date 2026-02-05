 #include <stdio.h>

 #include "freertos/FreeRTOS.h"
 #include "freertos/task.h"

#include "esp_system.h"
#include "esp_log.h"

static const char *TAG = "SYSTEM";
void app_main(void)
{
    ESP_LOGI(TAG, "=================================");
    ESP_LOGI(TAG, "ESP32 Security Controller Booting");
    ESP_LOGI(TAG, "=================================");

    ESP_LOGI(TAG, "ESP-IDF version: %s", esp_get_idf_version());

    esp_reset_reason_t reason = esp_reset_reason();
    ESP_LOGI(TAG, "Reset reason: %d", reason);

    ESP_LOGI(TAG, "System bring-up complete. Waiting...");
}
