/* 
Name: exo4.c
Purpose: Program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added
Date: 09/20/2026 
Author: Mehdi F.
*/

#include <stdio.h>

int main(void)
{
    float dollar_amount_supplied;

    printf("Please enter a dollar amount: ");
    scanf("%f", &dollar_amount_supplied);

    printf("With tax added: $%.2f\n", dollar_amount_supplied * 1.05);
    
    return 0;
}
