#include<stdio.h>
int main(){
    int n;
    printf("enter n(n>2):\t");
    scanf("%d",&n);
    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2]; //important
        printf("%d\t",fibo[i]);
    }
    printf("\n");
    return 0;
}