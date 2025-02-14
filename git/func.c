#include<stdio.h>
int num(int num1 , int num2);
int main()

{
    int a,b,max;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    max = num(a,b);
    printf("maximum=%d",max);

   return max;
}

int num(int num1,int num2)
{
    if(num1>num2)
    return num1;
    else 
    return num2;
}