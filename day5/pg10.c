#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of num");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    printf("%d \n",i*i);
}