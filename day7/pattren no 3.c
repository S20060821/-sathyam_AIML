#include <stdio.h>
int main() {
    int num;
    printf("Enter the integer value: ");
    scanf("%d", &num);  
    for (int i=1; i<=num; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            printf("1,2,3 ");
        }
        printf("\n");
    }

   return 0;
}