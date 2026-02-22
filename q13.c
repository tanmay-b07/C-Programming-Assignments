#include <stdio.h>
#include <string.h>

int main()
{
    char *arr[] = {"Amit", "Rohit", "Tanmay", "Amit", "Suresh", "Rohit"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate Strings:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(arr[i], arr[j]) == 0)
            {
                printf("%s\n", arr[i]);
                break;  // avoid printing same duplicate multiple times
            }
        }
    }

    return 0;
}