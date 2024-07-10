//factorial using recursion 
#include<stdio.h>
int fact(int num){
    if(num>0){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Factorial of given number is %d",fact(a));
}