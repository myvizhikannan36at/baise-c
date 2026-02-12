#include <stdio.h>
int main() {

    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num>=100 && num<=999){
        printf("Three-digit number");
    }else{
        printf("Two-dight number");
    }

    return 0;
}