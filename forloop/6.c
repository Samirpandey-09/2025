//Write a program in C to display the multiplication table for a given integer
#include<stdio.h>
int main(){
    int i,num,table;
    printf("eneter the number");
    scanf("%d",&num);
        for(i=1;i<=10;i++){
            table= num*i;
            printf("%d x %d  =%d \n",num,i,table);
        }
}