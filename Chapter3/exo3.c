/*
Name: exo3.c
Purpose: Program that breaks down an ISBN entered by the user
Date: 11/11/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int gsi_prefix, group_id, publisher_code, item_number, check_digit;


    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_id, &publisher_code, &item_number, &check_digit );
    printf("GS1 prefix: %d\n", gsi_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;

}

