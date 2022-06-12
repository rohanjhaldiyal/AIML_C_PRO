#include <stdio.h>

void main()
{
    char name[20];
    int id, salary;
    FILE *fptr;
    fptr = fopen("file.txt", "w+");
    printf("Enter employee name: ");
    gets(name);
    fprintf(fptr,"Name: %s\n", name);
    printf("Enter employee id: ");
    scanf("%d", &id);
    fprintf(fptr,"ID: %d\n", id);
    printf("Enter employee salary: ");
    scanf("%d", &salary);
    fprintf(fptr,"Salary: %d\n", salary);
    fclose(fptr);
}