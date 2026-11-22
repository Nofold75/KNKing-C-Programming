/*
Name: exo2.c
Purpose: Extend the exo1.c program to handle three-digit numbers.
Date: 11/22/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int number, first_digit, third_digit, second_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);


    first_digit = number/100;
    third_digit = (number%10);
    second_digit = (number/10)%10;

    printf("The reversal is: %d-%d-%d\n", third_digit , second_digit, first_digit);


    return 0;
    

}
