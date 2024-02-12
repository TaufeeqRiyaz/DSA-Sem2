#include<stdio.h>
#include<string.h>

struct Student{
    char name[20];
    char grade;
    int roll;
    float marks;
};

int main()
{    struct Student student;

    printf("Enter the name of the student - ");
    scanf("%s", student.name);
    printf("Enter the roll number of the student - ");
    scanf("%d", &student.roll);
    printf("Enter the grade of the student - ");
    scanf(" %c", &student.grade);
    printf("Enter the marks of the student - ");
    scanf("%f", &student.marks);
    printf("Name - %s\nRoll - %d\nGrade - %c\nMarks - %.2f\n", student.name, student.roll, student.grade, student.marks);

    return 0;
}