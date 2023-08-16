#include <stdlib.h>
#include "example-test.h"

int reasonable_values(float value){
    if(value > 8.0 && value < 35.0){
        return 1;
    }else{
        return 0;
    }    
}