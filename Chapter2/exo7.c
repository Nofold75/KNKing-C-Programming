/* 
Name: exo7.c
Purpose: Program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bill.
Date: 09/21/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{
    int dollar_amount, nbr_20bill, nbr_10bill, nbr_5bill, nbr_1bill;

    printf("Please enter a dollar amount: ");
    scanf("%d", &dollar_amount);
    
    

    nbr_20bill = dollar_amount / 20;
    dollar_amount = dollar_amount - nbr_20bill * 20;
    
    nbr_10bill = dollar_amount  / 10;
    dollar_amount = dollar_amount - nbr_10bill * 10;

    nbr_5bill = dollar_amount  / 5;
    dollar_amount = dollar_amount - nbr_5bill * 5;
    
    nbr_1bill = dollar_amount;

    printf("$20 bills: %d\n", nbr_20bill);
    printf("$10 bills: %d\n", nbr_10bill);
    printf("$5 bills: %d\n", nbr_5bill);
    printf("$1 bills: %d\n", nbr_1bill);
    
    
    
    return 0;
}
