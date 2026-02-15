#include <stdio.h>
int main() {
    int salary;
    printf("Enter your salary:");
    scanf("%d",&salary);

    if(salary>30000){
        printf("Bonus Eligible");
    }else{
        printf("Not Eligible");
    }
    
    return 0;
}