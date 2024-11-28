/*Create a program to print the month of the year based on a number (1-12) input by the user.*/
#include <stdio.h>

int main(){
    int month_no;
    printf("enter the month of the year between(1-12)");
    scanf("%d",&month_no);

    switch(month_no) {

    case 1: 
        printf("\nmonth is january");
    break;
    case 2: 
        printf("\nmonth is fabruary");
    break;
    case 3: 
        printf("\nmonth is march");
    break;
    case 4: 
        printf("\nmonth is april");
    break;
    case 5: 
        printf("\nmonth is may");
    break;
    case 6: 
        printf("\nmonth is june");
    break;
    case 7: 
        printf("\nmonth is jully");
    break;
    case 8: 
        printf("\nmonth is august");
    break;
    case 9: 
        printf("\nmonth is september");
    break;
    case 10: 
        printf("\nmonth is october");
    break;
    case 11: 
        printf("\nmonth is november");
    break;
    case 12: 
        printf("\nmonth is december");
    break;
    default:
    printf("Invalid month, please enter between (1-12)");
    break;
    
    }
     return 0;
}