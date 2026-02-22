#include<stdio.h>
int factorial_recursive(int a);
int factorial_iterative(int num);
int main()
{
    int a;
    printf("enter a number between 1 to 12:");
    scanf("%d", &a);
    if (a<0 || a>12)
    {
        printf("please provide number in range \n");
        return 1;
    }
    printf("the factorial of %d is %d (recursive)\n", a, factorial_recursive(a));
    printf("the factorial of %d is %d (iterative)\n", a, factorial_iterative(a));

    return 0;
}
int factorial_recursive(int a)
{
    if (a==0)
    {
        return 1;
    }
    else 
    {
        return a * factorial_recursive(a - 1);
    }
}
int factorial_iterative(int num)
{
    if(num<0 || num>12)
    {
        printf("please provide number in range  \n");
        return -1;
    }
    else if(num==0 || num==1)
    {
        return 1;    
    }
    else{
        int a = 1;
        for (int i = 2; i <= num;i++)
        {
            a *= i;
        }
        return a;
    }
}