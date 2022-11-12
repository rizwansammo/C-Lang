//
// Created by Zero Byte on 11/13/2022.
//Operating System : ParrotSec OS
#include "stdio.h"
int main(){
    int time;
    printf("What Time is it?:\n");
    scanf("%d", &time);

    if (time < 10) {
        printf("Good morning.");
    } else if (time < 20) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }
    return 0;
}
