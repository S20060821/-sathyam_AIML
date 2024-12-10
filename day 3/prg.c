//write a c program to read the input for num as integer & print the number from 1 tto num?
#include<stdio.h>
int main()
{
    int num;
    printf("enter the num: ");
    scanf("%d" , &num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",i);
    } 
}
