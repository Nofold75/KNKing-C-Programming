/* 
Name: exo6.c
Purpose: Update of exo5.c so that the polynomial is evaluated using the following formula ((((3x+2)x-5)x-1)x+7)x-6  (Horner's Rule)
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

    polynomial_result = ((((3 * x_value + 2 ) * x_value - 5) * x_value - 1) * x_value + 7) * x_value - 6 ;

    printf("Value of polynomial is: %d\n", polynomial_result);

    return 0;
}
