#include <stdio.h>
int main() {
    int value;
    printf("Enter thr value of cart:");
    scanf("%d",&value);

    if(value>=499){
        printf("Free delivery");
    }else{
        printf("Delivery charges apply");
    }

    return 0;
}