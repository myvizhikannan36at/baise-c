#include <stdio.h>
int main() {
    int mark;
    printf("Average Mark:");
    scanf("%d",&mark);

    if(mark>=90&&mark<=100){
        printf("Grade A");
    }else if(mark>=75){
        printf("Grade B");
    }else if(mark>=60){
        printf("Grade C");
    }else if(mark>=45){
        printf("Grade D");
    }else{
        printf("fAIL");
    }
    return 0;
}