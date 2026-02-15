#include <stdio.h>
int main() {
    int len;
    printf("Enter a lenght of password:");
    scanf("%d",&len);

    if(len>=8){
        printf("Strong password");
    }else{
        printf("Weak password");
    }
    
    return 0;
}