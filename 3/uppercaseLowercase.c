#include<stdio.h>
int main(){
    char ch;
    printf("enter character:\t");
    scanf("%c",&ch);
    //if(ch>='c' && ch>=97 & ch>='a') -> ascii value
    if(ch>='A' && ch<='Z'){
        printf("uppercase\n");
    } else if(ch>='a' && ch<='z'){
        printf("lowercase\n");
    } else{
        printf("not english letter\n");
    }
    return 0;
}