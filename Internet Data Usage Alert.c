#include <stdio.h>
int main() {
    float GBused;
    printf("Enter the data used:");
    scanf("%.2f",&GBused);

    if(2.0>=GBused){
        printf("Data limit exceeded");
    }else{
        printf("Data within limit");
    }

    return 0;
}