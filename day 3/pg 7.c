#include <stdio.h>
int main() {
    printf("enter the number:");
    scanf("%d", &num);
    print("even numbers 1 to %d",num);
    for(int i=1;<=num;i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
}