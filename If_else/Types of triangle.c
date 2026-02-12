#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the values:");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b==c){
        printf("Equilateral");
    }else if(a!=b&&b!=c&&a!=c){
        printf("Scalene");
    }
    
    return 0;
}