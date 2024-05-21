#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2)); //3
    printf("%d\n",*(arr+5)); //0 -> undefined behaviour
    return 0;
}