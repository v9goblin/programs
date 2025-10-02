/*
Name:James Githahu
Reg no:CT101/G/26463/25
Description:mobile_data
*/
#include <stdio.h>

int main() {
    int choice;
    printf("select data bundle\n");
    printf("1. 100MB  =  50 KES\n");
    printf("2. 500MB  =  200KES\n ");
    printf("3. 1GB    =  500KES\n");
    printf("4. 2GB    =  600KES\n");

    printf("enter your choice 1-4:");
    scanf("%d", &choice);


    switch(choice) {
    case 1:
        printf("you selected 100MB. cost = 50KES\n");
        break;
    case 2:
        printf("you selected 500MB. cost = 200KES\n");
        break;
    case 3:
        printf("you selected 1GB. cost = 500KES\n");
        break;
    case 4:
        printf("you selected 2GB. cost = 600KES\n");
        break;
    default:
        printf("invalid choice\n");
    }
    return 0;
}
