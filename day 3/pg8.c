#include<stdio.h>
int main(){
    int num;
    int i=1;
    printf("enter the number");
    scanf("%d",&num);
    printf("even number from 1 to %d\n",num);
    while(i<=num){
        if(i%2==0){
     printf("%d\n",i);  

        }
    }
         i++ 


}
