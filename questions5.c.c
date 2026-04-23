#include <stdio.h>  // file handling

int main() {
    FILE *fp;
    char name[50];
    int marks;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks: ");
    scanf("%d", &marks);

    fp = fopen("student.txt", "w"); 

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nMarks: %d\n", name, marks);
    fclose(fp); 

    printf("Data saved to student.txt\n");

}