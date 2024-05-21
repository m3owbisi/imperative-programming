#include<stdio.h>
int main(){
    int n;
    printf("enter number:\t");
    scanf("%d",&n);
    int sum=0;
    for(int j=n;j>=1;j--){
        sum=sum+j; //sum+=j;
        printf("%d\n",j);
    }
    printf("sum is:\t%d",sum);
    return 0;
}