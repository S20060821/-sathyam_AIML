#include <stdio.h>
int main() {
    int Num;
    printf("Enter the Number : ");
    scanf("%d",&Num);
    int count=0;
    for(int i=1;i<=Num;i++)
    {
        if(Num%i==0)
        {
            count++;
            
        }
    }
    if(count==2)
    {
        printf("%d is a prime NUmber ");
    }
    else
    {
        printf("the number is not a prime Number ");
        
    }
    }
    