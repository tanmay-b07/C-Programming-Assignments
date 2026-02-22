#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

int main()
{
    char nameOfStudents[10][50];
    int n;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    if(n > 10)
        n = 10;

    printf("Enter names:\n");

    for(int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", nameOfStudents[i]);
    }

    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compare);

    printf("\nSorted Names:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}