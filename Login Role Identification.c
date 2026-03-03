#include <stdio.h>
int main() {
    int num;
    printf("Enter input:");
    scanf("%d",&num);

    if(num==1){
        printf("Admin");
    }else if(num==2){
        printf("User");
    }else{
        printf("Guest");
    }
    
    return 0;
}