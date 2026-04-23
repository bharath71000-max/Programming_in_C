#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add\n2. View\n3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID, Name, Marks: ");
            scanf("%d %s %f", &s[count].id, s[count].name, &s[count].marks);
            count++;
        } 
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Marks: %.2f\n",
                       s[i].id, s[i].name, s[i].marks);
            }
        } 
        else {
            break;
        }
    }
    return 0;
}