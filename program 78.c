#include <stdio.h>
int main() {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
        if(num>0){
        printf("this number is positive \n");
        }else if(num<0){
        printf("this number is negative \n");
        }else
        printf("this number is zero \n");

    return 0;
}