#include <stdio.h>
int main() {
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);

    if(mark>=80&&mark<=100){
        printf("Distinction");
    }else if(mark>=40){
        printf("Pass");
    }else{
        printf("Fail");
    }
    
    return 0;
}