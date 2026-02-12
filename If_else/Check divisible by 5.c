#include <stdio.h>
int main() {

    /*int num;
    scanf("%d",&num);
    (num%5==0)?printf("Divisible by 5"):
    printf("Not divisible by 5");*/

    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("Divisible by 5");
    }else{
        printf("Not divisible by 5");
    }
    
    return 0;
}