#include <stdio.h>
int main() {
    int length;
    printf("Enter the length of Mail:");
    scanf("%d",&length);

    if(length>5){
        printf("valid mail");
    }else{
        printf("invalid mail");
    }

    return 0;
}