#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    if(ch>=64&&ch<=90||ch>=97&&ch<=122){
        printf("Alphabet");
    }else if(ch>=48&&ch<=57){
        printf("Dight");
    }else if(ch>=33&&ch<47||ch>=58&&ch<=64){
        printf("Special character");
    }else{
        printf("Undefined");
    }
    
    return 0;
}