/* 
Name: exo3.c
Purpose: Update of exo2.c so that the program prompts the user to enter the radius of the sphere
Date: 09/20/2026 
Author: Mehdi F.
*/

#define PIVALUE 3.1415926535f

#include <stdio.h>

int main(void)
{
     
    float radius_value, sphere_volume;
    
    printf("Please enter the radius of the sphere: ");
    scanf("%f", &radius_value);

    sphere_volume = 4.0f / 3.0f * PIVALUE * (radius_value * radius_value * radius_value);

    printf("Volume of the 10-meter radius sphere (in cubic meter): %.2f\n", sphere_volume);

    return 0;
}
