#include<stdio.h>
int main()
{
    int num;
    int sum_digits=0;
    printf("enter the integer value:");
    scanf("%d",&num);
    while(num!=0)
    {
        int rem=num%10;
        sum_digits=rem+sum_digits;
        num=num/10;
    }
    printf("sum of digits are:%d",sum_digits);
    return 0;
}