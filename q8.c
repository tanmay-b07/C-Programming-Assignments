#include <stdio.h>

struct Student
{
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

void readStudent(struct Student *s)
{
    printf("Enter Student Name: ");
    scanf("%[^\n]", s->studentName);

    printf("Enter Roll Number: ");
    scanf("%s", s->rollNo);

    printf("Enter Total Marks: ");
    scanf("%d", &s->totalMarks);
}

void displayStudent(struct Student *s)
{
    printf("\nStudent Details:\n");
    printf("Name       : %s\n", s->studentName);
    printf("Roll No    : %s\n", s->rollNo);
    printf("Total Marks: %d\n", s->totalMarks);
}

int main()
{
    struct Student s1;

    readStudent(&s1);
    displayStudent(&s1);

    return 0;
}