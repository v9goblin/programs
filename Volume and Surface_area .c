/*
Name:James Githahu
Reg no:CT101/G/26463/25 
Description:volume and surface_area 
*/
#include<stdio.h>

int main()
{
float π, radius²,radius, height, volume, surface_area;
printf("enter radius²:");
scanf("%f", &radius²);

printf("enter height:");
scanf("%f", &height);

printf("enter π:");
scanf("%f", &π);

printf("enter radius:");
scanf("%f", &radius);

volume=π*radius²*height;
surface_area=2*π*radius²+π*radius*height;

printf("your volume is %.2f\n", volume);
printf("your surface_area is %.2f", surface_area);




    return 0;
}