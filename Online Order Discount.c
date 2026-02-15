#include <stdio.h>
int main() {
    int amount;
    printf("Enter a amount:");
    scanf("%d",&amount);
    
    if(amount>=1000){
        printf("Discount Applied");
    }else{
        printf("NO Discount");
    }

    return 0;
}