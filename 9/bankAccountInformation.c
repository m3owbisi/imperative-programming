#include<stdio.h>
#include<string.h>
typedef struct bankAccount{
    int accountNo;
    char name[100];
} acc;
int main(){
    acc acc1={123,"shradha"};
    acc acc2={124,"rajat"};
    acc acc3={125,"sudhir"};
    printf("acc no=%d",acc1.accountNo);
    printf("\nname=%s",acc1.name);
    return 0;
}