#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name:\t");
    scanf("%s",name);
    printf("enter age:\t");
    scanf("%d",&age);
    printf("enter cgpa:\t");
    scanf("%f",&cgpa);
    fprintf(fptr,"name=%s\n",name);
    fprintf(fptr,"age=%d\n",age);
    fprintf(fptr,"cgpa=%f\n",cgpa);
    fclose(fptr);
    return 0;
}