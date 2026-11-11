/*
Name: exo4.c
Purpose: Program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx 
and then displays the number in the form xxx.xxx.xxxx
Date: 11/11/2026 
Author: Mehdi Fadel
*/

#include <stdio.h>

int main(void)
{

    int phone_code, phone_number_part1, phone_number_part2;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phone_code, &phone_number_part1, &phone_number_part2);
    printf("You entered %3d.%3d.%4d\n", phone_code, phone_number_part1, phone_number_part2);

    return 0;

}