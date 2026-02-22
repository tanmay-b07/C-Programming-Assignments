#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Please provide a number\n");
        return 0;
    }

    char *end;
    long num = strtol(argv[1], &end, 10);

    if(*end != '\0')
    {
        printf("Invalid number provided\n");
        return 0;
    }

    printf("Table of %ld\n", num);

    for(int i = 1; i <= 10; i++)
    {
        printf("%ld * %d = %ld\n", num, i, num * i);
    }

    return 0;
}