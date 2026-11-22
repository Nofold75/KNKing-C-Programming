/*
Name: exo4.c
Purpose: Enter a program that reads an integer entered by the user and displays it in octal(base8).
Date: 11/22/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int number, octal_number, d1, d2, d3, d4, d5, d6;






    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    
    d1= (number%8);
    d2 = (number/8)%8;
    d3 = (number/64)%8;
    d4 = (number/512)%8;
    d5 = ((number/512)/8)%8;
    d6 = (((number/512)/8)/8)%8;



    printf("In octal, your number is: %1d%1d%1d%1d%1d \n", d5, d4, d3, d2, d1);

    return 0;

}
