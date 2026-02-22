#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}