#include <stdio.h>
#include "process.h"

int main(void){
    if (isMcRunning()){
        printf("Minecraft is running.\n");
    }
    else{
        printf("Minecraft is not running.\n");
    }

    return 0;
}