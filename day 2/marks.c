#include <stdio.h>
int main() 
{
    int marks[3];
    printf("physics:");
    scanf("%d",&marks[0]);
    printf("chem:");
    scanf("%d",&marks[1]);
    printf("math:");
    scanf("%d",&marks[2]);
    printf("physics=%d",&marks[0]);
    printf("chem=%d",&marks[1]);
    printf("math=%d",&marks[2]);
}