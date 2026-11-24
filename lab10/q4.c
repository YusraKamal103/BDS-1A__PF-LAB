#include <stdio.h>

struct Address {
    char city[30];
    int zip;
    char state[30];
};

struct Student {
    int roll;
    char name[30];
    float cgpa;
    struct Address studentAddress;
};

int main() {
    struct Student student1 = {
        2518, "Ali Khan", 3.45,
        {"Karachi", 75000, "Sindh"}
    };

    printf("Student Profile\n");
    printf("Roll No: %d\n", student1.roll);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n", student1.studentAddress.zip);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
