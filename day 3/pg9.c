#include<stdio.h>
int main()
{
    int num;
    int isprime=0;
    printf("enter the prime number");
    scanf("%d",&num);
    int isprime;
    for(int i=2;i<=num;i++)
    {
        isprime=1;
        if(num%1==0)
        {
            isprime=0;

        }
 
    }
}