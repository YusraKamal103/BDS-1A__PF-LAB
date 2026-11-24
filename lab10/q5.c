#include <stdio.h>

struct HospitalRecord {
    int rid;
    char ward[20];
    int days;
    struct PatientInfo {
        int pid;
        char name[30];
        int age;
    } info;
};

int main() {
    struct HospitalRecord r = {
        501, "Emergency", 3,
        {1001, "Ahmed Raza", 45}
    };
    struct HospitalRecord *ptr = &r;

    printf("Hospital Record\n");
    printf("Record ID: %d\n", ptr->rid);
    printf("Ward: %s\n", ptr->ward);
    printf("Days Admitted: %d\n", ptr->days);
    printf("Patient ID: %d\n", ptr->info.pid);
    printf("Patient Name: %s\n", ptr->info.name);
    printf("Patient Age: %d\n", ptr->info.age);

    return 0;
}
