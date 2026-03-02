#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float average;
    char grade;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].average = s[i].total / 3.0;

        if(s[i].average >= 90)
            s[i].grade = 'A';
        else if(s[i].average >= 75)
            s[i].grade = 'B';
        else if(s[i].average >= 60)
            s[i].grade = 'C';
        else if(s[i].average >= 50)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll Number: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nAverage Marks: %.2f", s[i].average);
        printf("\nGrade: %c\n", s[i].grade);
    }

    return 0;
}