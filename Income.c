/*
Name:James Githahu
Reg no:CT101/G/26463/25
Description:age, income
*/
#include <stdio.h>

int main() {
    int age, income;
    
    printf("Enter age:");
    scanf("%d", &age);
    
    printf("Enter income:");
    scanf("%d", &income);
    
    if (age >= 21 & income >= 21000) 
        printf("Congratulations, you qualify for a loan.\n");
    else
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    
    
    return 0;
} 