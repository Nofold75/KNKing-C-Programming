/* 
Name: exo8.c
Purpose: Program that calculates the remaining balance on a loan after the first, second , and third monthly payments. Display each balance with two digits after the decimal point.
Date: 09/21/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, amount_remaining, monthly_interest_rate;

    printf("Please enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Please enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Please enter monthly payment: ");
    scanf("%f", &monthly_payment);


    monthly_interest_rate = (interest_rate / 100) / 12 ;
    amount_remaining = (loan_amount * (1 + monthly_interest_rate)) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", amount_remaining);

    amount_remaining = (amount_remaining * (1 + monthly_interest_rate)) - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", amount_remaining);

    amount_remaining = (amount_remaining * (1 + monthly_interest_rate)) - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", amount_remaining);
    
    return 0;
}
