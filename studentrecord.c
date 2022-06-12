#include <stdio.h>
struct student 
{
    char name[20], address[100];
    int rollno;
    float marks;
} st;
void main()
{
    printf("Enter the name of the student: ");
    gets(st.name);
    printf("\nEnter the address of the student: ");
    gets(st.address);
    printf("\nEnter the roll no of the student: ");
    scanf("%d", &st.rollno);
    printf("\nEnter the marks of the student: ");
    scanf("%f", &st.marks);
    printf("Name: %s\nAddress: %s\nRoll no: %d\nMarks: %.2f\n", st.name, st.address, st.rollno, st.marks);
}