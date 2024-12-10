#include <stdio.h>
int main() 
{
    int num=144;
    int *pointer=&num;
    printf(" num=%d \n",num);
    printf(" (reffered)=%d \n",num);
    printf(" num=%p \n",num);
    printf(" pointer=%p \n",pointer);
    return 0;
}