#include <stdio.h>
#include <string.h>
#include "unity.h"
#include "dht.h"

void setUp(void){
}

void tearDown(){
}

int reasonable_values(){
    float temperature, humidity;
    float result = dht_read_float_data(SENSOR_TYPE, CONFIG_EXAMPLE_DATA_GPIO, &humidity, &temperature) == ESP_OK);
    if(result && result > 13.0 && result < 35.0){
        return 1;
    }else{
        return 0;
    }

}

void test_reasonable_values(){
    TEST_ASSERT(1, reasonable_values());
}

int app_main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_reasonable_values);
    UNITY_END();
}
