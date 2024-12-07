#include<stdio.h>
int main()
{
    void sub(int num1,int num2)
    {
     printf("subtraction of %d & %d is : %d",num1,num2,(num1-num2));
    }
    sub(12,9);
    sub(18,100);
}