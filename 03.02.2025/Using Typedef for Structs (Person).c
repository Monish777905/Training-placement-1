#include <stdio.h>

typedef struct {
    char name[30];
    int age;
} Person;

int main() {
    Person p1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
