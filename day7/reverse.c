#include <stdio.h>
int main() 
{
    int num;
    int rev=0;
    int rem=0;
    printf("enter the integer value:");
    scanf("%d",&num);
    while(num!=0){
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
    }
     printf("%d is reversed number",rev);
     return 0;
}