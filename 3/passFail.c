#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-100):\t");
    scanf("%d",&marks);
    if(marks<=30){
        printf("FAIL\n");
    } else{
        printf("PASS\n");
    }
    return 0;
}