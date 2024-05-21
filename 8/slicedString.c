#include<stdio.h>
void slice(char str[],int n,int m);
int main(){
    char str[]="helloworld";
    slice(str,3,6);
    return 0;
}
void slice(char str[],int n,int m){ //n & m are valid values
    char newStr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}