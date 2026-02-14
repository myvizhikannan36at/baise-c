#include <stdio.h>
int main() {
    char vl;
    printf("Enter a value :");
    scanf("%c",&vl);

    if(vl>=48&&vl<=57){
        printf("Digit");
    }else{
        printf("Not a Digit");
    }
    
    return 0;
}