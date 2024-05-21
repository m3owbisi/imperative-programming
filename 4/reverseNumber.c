#include<stdio.h>
int main(){
    int n;
    printf("enter number:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}