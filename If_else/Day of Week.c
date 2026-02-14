#include <stdio.h>
int main() {
    int date;
    printf("Enter a number:");
    scanf("%d",&date);

    switch(date){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tueday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
    
    } 
    
    return 0;
}