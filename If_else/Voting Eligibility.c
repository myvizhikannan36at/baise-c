#include <stdio.h>
int main() {
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age>=18 && age<=110){
        printf("You're Eligible");
    }else{
        printf("you're not Eligible");
    }

    return 0;
}