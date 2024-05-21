#include<stdio.h>
void _printAddress(int *n);
int main(){
    int n=4;
    printf("%p\n",&n);
    _printAddress(&n);
    return 0;
}
void _printAddress(int *n){
    printf("%p\n",&n);
}
