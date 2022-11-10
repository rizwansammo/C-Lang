//
// Created by Zero Byte on 11/11/2022.
//
#include "stdio.h"
int main(){
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt)); //Show the byte memory size of int data type
    printf("%lu\n", sizeof(myFloat)); //Show the byte memory size of float data type
    printf("%lu\n", sizeof(myDouble)); //Show the byte memory size of double data type
    printf("%lu\n", sizeof(myChar)); //Show the byte memory of size of char type
    return 0;
}