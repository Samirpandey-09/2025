//Write a program in C to display the multiplier table vertically from 1 to n
#include<stdio.h>
int main(){
    int i,j,table,n;
   printf("eter upto the table end ");
   scanf("%d",&n);
    printf("multiplication table from %d to %d ",i,n);

    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            
            table=i*j;
            printf("%d x %d = %d,",j,i,table);


        }
        printf("\n");
    }
}