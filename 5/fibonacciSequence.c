#include<stdio.h>
int fibo(int n);
int main(){
    printf("%d",fibo(6));
    return 0;
}
int fibo(int n){
    if(n==0||n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fiboNm1=fibo(n-1);
    int fiboNm2=fibo(n-2);
    int fiboN=fiboNm1+fiboNm2;
    //printf("fibo of %d is %d\n",n,fiboN);
    return fiboN;
}