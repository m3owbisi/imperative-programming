#include<stdio.h>
int main(){
    int *ptr;
    int x;
    ptr=&x;
    *ptr=0; //x=0
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    *ptr=5; //x=5
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    (*ptr)++; //x=6
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    *ptr=*ptr+5;
    printf("x=%d\n",x);
    *ptr=*ptr+1;
    printf("x=%d\n",x);
    //x=6
    //x=6+5;
    //x+=5;
    //x=11;
    //x=11+1;
    //x=12;
    return 0;
}