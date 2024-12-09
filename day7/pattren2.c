#include <stdio.h>
int main() 
{
    int num;
    printf("enter the  value of num :\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
    for(int j=1;j<=num;j++){
     printf("%c",(64+j));
     
}
printf("\n");
}
    return 0;
}