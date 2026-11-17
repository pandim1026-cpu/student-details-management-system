#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float cutOffMark;
    char city[30];
    char dream[50];
};

int main()
{
    struct Student students[100];
    int count;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &count);

    if (count <= 0 || count > 100)
    {
        printf("Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < count; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Cut-off Mark: ");
        scanf("%f", &students[i].cutOffMark);

        printf("City: ");
        scanf(" %29[^\n]", students[i].city);

        printf("Dream: ");
        scanf(" %49[^\n]", students[i].dream);
    }

    printf("\n===== STUDENT DETAILS =====\n");

    for (i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", students[i].rollNumber);
        printf("Name        : %s\n", students[i].name);
        printf("Cut-off Mark: %.2f\n", students[i].cutOffMark);
        printf("City        : %s\n", students[i].city);
        printf("Dream       : %s\n", students[i].dream);
    }

    return 0;
}