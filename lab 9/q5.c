#include <stdio.h>

void printSensorData(void *ptr, char type) {
    if (type == 'f') {
        printf("Temperature: %.2f C\n", *(float *)ptr);
    } else if (type == 'i') {
        int val = *(int *)ptr;
        if (val == 1) {
            printf("Motion Detected\n");
        } else if (val == 0) {
            printf("No Motion\n");
        }
    } else if (type == 'c') {
        char val = *(char *)ptr;
        if (val == 'O') {
            printf("Door Open\n");
        } else if (val == 'C') {
            printf("Door Closed\n");
        }
    }
}

int main() {
    float temp = 25.5;
    int mot = 1;
    char door = 'O';

    printSensorData(&temp, 'f');
    printSensorData(&mot, 'i');
    printSensorData(&door, 'c');

    return 0;
}
