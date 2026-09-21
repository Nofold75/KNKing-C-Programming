/* 
Name: exo5.c
Purpose: Program that asks the user to enter a value for x and then displays the value of the following polynomial: 3x5 + 2x4 -5x3 - x2 + 7x - 6
Date: 09/21/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{
    int x_value;
    int polynomial_result;

    printf("Please enter a value for x: ");
    scanf("%d", &x_value);

    polynomial_result = (( 3 * ((x_value) * (x_value) * (x_value) * (x_value) * (x_value)) ) + ( 2 * ((x_value) * (x_value) * (x_value) * (x_value)) ) - ( 5 * ((x_value) * (x_value) * (x_value)) ) - ((x_value) * (x_value)) + ( 7 * (x_value) ) - 6);

    printf("Value of polynomial is: %d\n", polynomial_result);

    return 0;
}
