#include<stdio.h>
int sum(int n);
int main(){
    printf("sum is:\t%d",sum(5));
    return 0;
}
//recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1); //sum of n-1
    int sumN=sumNm1+n; //1 to n
    return sumN;
}