#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newPassword[200];
    strcpy(newPassword,password); //test;
    strcat(newPassword,salt); //newPassword="test"+"123";
    puts(newPassword);
}