#include <stdio.h>
struct Stu{
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int standard;
    char school[50];
};

int main() {
    FILE *ptr1 = fopen("data.txt", "w");
    if (ptr1 == NULL) {
        printf("Error.");
        return 1;
    }

    struct Stu a[3];
    int i;

    for ( i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &a[i].id);
        printf("Name: ");
        scanf("%s", &a[i].name);
        printf("Age: ");
        scanf("%d", &a[i].age);
        printf("Course: ");
        scanf("%s",&a[i].course);
        printf("City: ");
        scanf("%s",&a[i].city);
        printf("Standard: ");
        scanf("%d", &a[i].standard);
        printf("School: ");
        scanf("%s", &a[i].school);

        fprintf(ptr1, "ID: %d\n", a[i].id);
        fprintf(ptr1, "Name: %s\n", a[i].name);
        fprintf(ptr1, "Age: %d\n", a[i].age);
        fprintf(ptr1, "Course: %s\n", a[i].course);
        fprintf(ptr1, "City: %s\n", a[i].city);
        fprintf(ptr1, "Standard: %d\n", a[i].standard);
        fprintf(ptr1, "School: %s\n", a[i].school);
        fprintf(ptr1, "\n");
    }

    fclose(ptr1);
    printf("Student Record.\n");

    return 0;
}
