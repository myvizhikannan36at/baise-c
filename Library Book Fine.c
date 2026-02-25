#include <stdio.h>
int main() {
    int days;
    printf("Enter the days:");
    scanf("%d",&days);

    if(days<=7){
        printf("No fine");
    }else{
        printf("Fine applied");
    } 
    
    return 0;
}