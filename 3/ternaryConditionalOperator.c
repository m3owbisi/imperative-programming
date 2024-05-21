#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-100):\t");
    scanf("%d",&marks);
    marks<=30 ? printf("FAIL\n") : printf("PASS\n");
    return 0;
}