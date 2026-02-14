#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num>=10&&num<=20){
        printf("Number Within the Range");
    }else{
        printf("Number is not in the Range");
    }
    return 0;
}