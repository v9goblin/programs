/*
Name:James Githahu
Reg no:CT101/G/26463/25
Description:units, bill
*/
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("enter units consumed:");
    scanf("%d", &units);

    if(units<=30){
   bill=units*20;
    }
    else if(units>30 && units <=60){
    bill=units*25;
    }
    else{
    bill=units*30;
    }
    printf("your water bill is ksh %.2f", bill);



    return 0;
}