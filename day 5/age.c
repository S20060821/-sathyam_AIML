#include <stdio.h>
int main() 
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf(" num=%d \n", _age);
    printf(" %p \n",&age);
    printf(" %p \n",&ptr);
    printf(" %p \n",(&age));
    printf(" %d \n",&age);
    printf(" %d \n",&ptr);
    printf(" %d \n",(&age));
    return 0;
}