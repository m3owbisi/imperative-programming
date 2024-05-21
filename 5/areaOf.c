#include<stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length,float breadth);
int main(){
    float a=5.0;
    float b=10.0;
    printf("area is:\t%f",rectangleArea(a,b));
    return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float radius){
    return 3.14*radius*radius;
}
float rectangleArea(float length,float breadth){
    return length*breadth;
}