#include<stdio.h>
int main(){
    int x;
    printf("enter number:\t");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);
    return 0;
}