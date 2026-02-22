#include <stdio.h>

void printBinary(int num)
{
    for(int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}

void printOctal(int num)
{
    if(num == 0)
        return;

    printOctal(num / 8);
    printf("%d", num % 8);
}

void printHex(int num)
{
    if(num == 0)
        return;

    printHex(num / 16);

    int rem = num % 16;

    if(rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number : %d\n", num);

    printf("Binary equivalent : ");
    printBinary(num);
    printf("\n");

    printf("Octal equivalent : ");
    if(num == 0)
        printf("0");
    else
        printOctal(num);
    printf("\n");

    printf("Hexadecimal equivalent : ");
    if(num == 0)
        printf("0");
    else
        printHex(num);
    printf("\n");

    return 0;
}