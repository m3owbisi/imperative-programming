#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("enter numbers(5):\t");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("enter numbers(8):\t");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    //print
    for(int i=0;i<8;i++){
        printf("number is:%d\t",ptr[i]);
    }
    return 0;
}