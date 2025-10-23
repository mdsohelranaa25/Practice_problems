#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    struct Student s1, s2;
    
    printf("Enter details for first student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Age: ");
    scanf("%d", &s1.age);
    printf("Total Marks: ");
    scanf("%f", &s1.total_marks);

    printf("Enter details for second student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Age: ");
    scanf("%d", &s2.age);
    printf("Total Marks: ");
    scanf("%f", &s2.total_marks);

    printf("\nStudent Information:\n");
    printf("Name: %s, Age: %d, Total Marks: %.2f\n", s1.name, s1.age, s1.total_marks);
    printf("Name: %s, Age: %d, Total Marks: %.2f\n", s2.name, s2.age, s2.total_marks);

    float average = (s1.total_marks + s2.total_marks) / 2;
    printf("\nAverage Total Marks: %.2f\n", average);

    return 0;
}
