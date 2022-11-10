//
// Created by Zero Byte on 11/11/2022.
//
#include "stdio.h"
int main(){
    const int myNum = 15;  // myNum will always be 15 and Read Only
    //It'll show error if type
    //int myNum = 10;  : Error, Cause its Read Only
    printf("%d", myNum);
    return 0;
}