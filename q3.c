#include<stdio.h>
 int Fibonacci_number (int a)
 {
     int initial1 = 0, initial2 = 1, next=0;
    
    if (a==1)
     {
         return initial1;
     }
     else if(a==2)
     {
         return initial2;
     }
     else 
     {
         for (int i = 3; i <= a; i++)
         {
             next = initial1 + initial2;
             initial1 = initial2;
             initial2 = next;
         }
         return next;
     }



 }
 void fibonacci_series(int num)
 {
     int a = 0, b = 1, n = 0;
     for (int i = 1; i <= num;i++)
     {
         if (i==1)
         {
             printf("%d", a);
         }
         else if(i==2)
         {
             printf(",%d", b);

         }
         else
         {
            n = a + b;
         a = b;
         b = n;
             printf(",%d", n);
         }
     }
        
 }

 int main()
 {
     int a;
     printf("enter a positive number:");
     scanf("%d", &a);
    if (a<=0)
     {
         printf("please provide positive integer \n");
    }
    else
    {
     printf("the %dth Fibonacci number is %d\n", a, Fibonacci_number(a));
     printf("the Fibonacci series upto %d term as following\n",a);
     fibonacci_series(a);
}
        return 0;
 }