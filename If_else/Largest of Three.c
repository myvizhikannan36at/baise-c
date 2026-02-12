#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c){
        printf("A =%d is Largest",a);
    }else if(b>c){
        printf("B =%d is Largest",b);
    }else{
        printf("C =%d is Largest",c);
    }
    
    return 0;
}