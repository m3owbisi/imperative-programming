#include<stdio.h>
int main(){
    int x=0, y=x; //int y=x; -> errors because it is an invalid statement 
    printf("%d",y);
    return 0;
}