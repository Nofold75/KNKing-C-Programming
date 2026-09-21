/* 
Name: exo2.c
Purpose: Program that computes the volume of a sphere with a 10-meter radius, using the formulva v = 4/3*pi*r³
Date: 09/20/2026 
Author: Mehdi Fadel
*/

#define PIVALUE 3.1415926535f

#include <stdio.h>

int main(void)
{
    float sphere_volume = 4.0f / 3.0f * PIVALUE * (10*10*10);
    
    printf("Volume of the 10-meter radius sphere (in cubic meter): %.2f\n", sphere_volume);

    return 0;
}