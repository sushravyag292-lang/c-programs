#include <stdio.h>

struct student {
    int id;
    char name[20];
};

void display(struct student *s) {
    printf("ID: %d\n", s->id);
    printf("Name: %s\n\n", s->name);
}

int main() {
    struct student s1 = {1, "Alice"};
    struct student s2 = {2, "Bob"};
    struct student s3 = {3, "Charlie"};

    display(&s1);
    display(&s2);
    display(&s3);

    return 0;
}