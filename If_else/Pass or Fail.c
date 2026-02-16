#include <stdio.h>
int main() {
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);

    if(mark>=0&&mark<=100){
    if(mark>=45){
        printf("Pass");
    }else{
        printf("Fail");
    }
    }else{
        printf("invalid mark");
    }
    return 0;
}