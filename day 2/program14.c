#include<stdio.h>
int main()
{
    int num;
    printf("Enter the4 value of num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c\t",(96+j));
        }
        printf("\n");

    }
}