/*
Name: exo1.c
Purpose: Program that formats product information entered by the user.
Date: 11/10/2026 
Author: Mehdi Fadel
*/
#include <stdio.h>



int main(void) 
{

    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\t Unit\t\t Purchase\n\t\t Price\t\t Date\n%-d\t\t $ %6.2f\t %-.2d/%-.2d/%-d\n", item_number, unit_price, month, day, year);




    return 0;
}