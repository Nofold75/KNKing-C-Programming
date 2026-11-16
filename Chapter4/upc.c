/*
Name: exo1.c
Purpose: Computes a Universal Product Code check digit 
Date: 11/16/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{
    int d, d1, d2, d3, d4, d5, i1, i2, i3, i4, i5, sum1, sum2, check_digit;

    printf("Enter the first (single) digit: \n");
    scanf("%1d", &d);

    printf("Enter first group of five digits: \n");
    scanf("%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5);

    printf("Enter second group of five digits: \n");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    sum1 = d + d2 + d4 + i1 +i3 + i5;
    sum2 = d1 + d3 + d5 + i2 + i4;
    check_digit = 9 - ((((sum1 *= 3) + (sum2)) -1) % 10) ;

    printf("Check digit is: %d\n", check_digit);
    
    return 0;
}
