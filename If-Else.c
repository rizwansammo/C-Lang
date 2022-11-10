//
// Created by Zero Byte on 11/11/2022.
//
#include<stdio.h>

int main()
{
    printf("=========Hello There=======");

    int number;
    printf("\nPlease enter a number:\n");
    scanf("%d",&number);
    if(number < 100)
        printf("Number is less than 100!");
    else if(number == 100)
        printf("Number is 100!");
    else
        printf("Number is greater than 100!");

    printf("\nThanks");

    return 0;
}