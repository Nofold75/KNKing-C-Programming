/*
Name: exo3.c
Purpose: Exo2.c modified so that it prints reversal of a three-digit number without using arithmetic to split the number into digits.
Date: 11/22/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int digit1, digit2, digit3;

    printf("Please enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
    return 0;

}
