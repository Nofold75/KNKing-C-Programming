/*
Name: exo1.c
Purpose: Program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
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
