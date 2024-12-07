//write a c program to print the no of even no and odd no present from 1 to n
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int even_count=0;
    int odd_count=0;
    printf("enter the value of num");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("even_count=%d \n",even_count);
}