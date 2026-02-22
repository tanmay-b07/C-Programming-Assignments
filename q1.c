#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    if (argc<2)
    {
        printf("please provide inputs\n");
        return 1;
    }
    else
    {
        long max = strtol(argv[1],NULL,10);
        for (int i = 2; i < argc;i++)
        {
            long num = strtol(argv[i], NULL, 10);
            if (num>max)
            {
                max = num;
            }
        }
        printf("the maximum number is %ld\n", max);
    }
    return 0;
}