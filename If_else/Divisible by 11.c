#include <stdio.h>
int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num%11==0){
        printf("Divisible by 11");
    }else{
        printf("Not Divisible by 11");
    }
    
    return 0;
}