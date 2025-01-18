//Write a program in C to display the cube of the number up to an integer
#include<stdio.h>
int main (){
    int term,cube;
    printf("enter the terms\n");
    scanf("\n%d",&term);

    for(int i=1;i<=term;i++){
            cube= i*i*i;
            printf("the no is %d and the cube is %d\n",i,cube);
    }
}