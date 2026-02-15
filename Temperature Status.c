#include <stdio.h>
int main() {
    int temp;
    printf("Temperature :");
    scanf("%d",&temp);

    if(20>=temp){
        printf("Cold");
    }else if(20<=temp&&30>=temp){
        printf("Normal");
    }else if(30<=temp){
        printf("Hot");
    }else{
        printf("invalid");
    }
    
    return 0;
}