#include <stdio.h>
int main() {
    /*char ch;
    printf("Enter a Letter :");
    scanf("%c",&ch);

    if(ch>=64&&ch<=90){
        printf("UPPER-CASE LETTER");
    }else{
        printf("LOWER-CASE LETTER");
    }*/

    char ch;
    printf("Enter a Letter :");
    scanf("%c",&ch);
    if(ch=='A'&&ch=='Z'||ch=='a'&&ch=='z')
    else if(ch>='A'&&ch<='Z'){
        printf("UPPER-CASE LETTER");
    }else if(ch>=97&&ch<=122){
        printf("LOWER-CASE LETTER");
    }else{
        printf("Invalid");
    }

    return 0;
}