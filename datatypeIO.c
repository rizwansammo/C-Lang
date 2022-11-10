//
// Created by Zero Byte on 11/11/2022.
//
#include "stdio.h"
void main(){
    // Create variables
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

// Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    // format specifier in C of decimal pointer
    printf("%0.2f", myFloatNum);
}