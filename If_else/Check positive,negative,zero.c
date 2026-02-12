#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num>0){
        printf("positive");
    }else if(num<0){
        printf("negative");
    }else{
        printf("Zero");
    }
    
    return 0;
}