#include <stdio.h>
int main() {
    char ch;
    printf("Enter a letter :");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z')
    { 
        printf("It is a capital letter ");
    }else{
        printf("Not a capital letter ");
    }
    return 0;
}