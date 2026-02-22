#include<stdio.h>
int main()
{
    int a[5]; 
    int total = 0;  
    for (int i = 0; i < 5;i++)
    {
    printf("enter the marks of %d subject:", i + 1);
    scanf("%d", &a[i]);
     while  (a[i]<0 || a[i]>100)
        {
            printf("invalid marks provided for subject %d\n", i + 1);
            printf("please provide marks in range 0 to 100:");
            scanf("%d", &a[i]);
        }
    }
    for (int i = 0; i < 5;i++)
    {
        
        
        total += a[i];
        if(a[i]>=90)
            printf("grade obtained in subject %d is Ex\n", i + 1);
        else if (a[i]>=80&&a[i]<90)
            printf("grade obtained in subject %d is A\n", i + 1);
        else if (a[i]>=70&&a[i]<80)
           printf("grade obtained in subject %d is B\n", i + 1);
        else if (a[i]>=60&&a[i]<70)
         printf("grade obtained in subject %d is C\n", i + 1);
        else 
        printf("grade obtained in subject %d is F\n", i + 1);
        
        
       
}
 float percentage = total / 5.0;
        if(percentage>=90)
            printf("overall grade obtained is EX and percentage is %.2f", percentage);
        else if(percentage>=80&&percentage<90)
        printf("overall grade obtained is A and percentage is %.2f", percentage);
         else if (percentage >= 70 && percentage < 80)
         printf("overall grade obtained is B and percentage is %.2f", percentage);
            else if (percentage >= 60 && percentage < 70)
                printf("overall grade obtained is C and percentage is %.2f", percentage);

            else 
            printf("overall grade obtained is F and percentage is %.2f", percentage);
            }