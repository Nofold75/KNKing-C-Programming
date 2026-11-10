/*
Name: exo1.c
Purpose: Program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
Date: 11/10/2026 
Author: Mehdi Fadel
*/
#include <stdio.h>




int main(void) 
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date: %d%.2d%.2d\n", year, month, day);


    return 0;
}

 
