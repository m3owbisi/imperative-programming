#include<stdio.h>
int main(){
    int n;
    printf("enter number:\t");
    scanf("%d",&n);
    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum=sum+j; //sum+=j;
        printf("%d\n",j);
    }
    printf("sum is:\t%d",sum);
    return 0;
}