/*
Name:James Githahu
Reg no:CT101/G/26463/25
Description:exam eligibility
*/
#include <stdio.h>

int main() {
    float attendance, average_marks;
    printf("enter attendance_percentage:");
    scanf("%f", &attendance);

    printf("enter average_marks:");
    scanf("%f", &average_marks);

    if(attendance>=75 && average_marks>=40) {
        printf("eligible\n");
    }
    else{
        printf("not eligible");
    }





    return 0;
}