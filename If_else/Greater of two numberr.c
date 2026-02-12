#include <stdio.h>
int main() {
    /*
    int a,b;
    scanf("%d %d",&a,&b);

    (a>b)?printf(" %d is Greater",a):
    printf("%b is Greater",b);
    */

    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("%d is greater",a);
    }else{
        printf("%d is greater",b);
    }

    return 0;
}