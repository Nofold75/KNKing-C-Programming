/*
Name: exo2.c
Purpose: Extend the exo1.c program to handle three-digit numbers.
Date: 11/22/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int number;

    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    printf("The reversal is: %d%d \n", number%10, number/10 );



    return 0;
    

}
