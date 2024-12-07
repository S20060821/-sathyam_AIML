#include<stdio.h>
int main(){
    int num;
    int i=1;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("number from 1 to %d",num);
    while (i<=num)
    {
    printf("%d \n",i);
    i++;
    }
}