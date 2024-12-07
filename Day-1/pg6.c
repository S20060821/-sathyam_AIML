#include <stdio.h>
int main() 
{
    int month;
    printf("enter the month ");
    scanf("%d",&month);
    if( month>=1 && month<=12 )
    {
         printf("valid");
    }
    else 
    {
    
         printf("not valid");
    }
}