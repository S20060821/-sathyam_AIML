// write a program for basic calculator using finction
#include <stdio.h>

int main() 
{
    int num1,num2;
    printf("enter the value for num1 :");
    scanf("%d",&num1);
      printf("enter the value for num2 :");
    scanf("%d",&num2);
    void  caluclate(int x,int y)
    {
            printf("summation : %d\n",(x+y));
            printf("difference : %d\n",(x-y));
            printf("product : %d\n",(x*y));
            printf("quotient : %d\n",(x/y));
            printf("remainder: %d\n",(x%y));
    }
    caluclate(num1,num2);
}