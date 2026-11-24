#include <stdio.h>

#define RATE 50

void processVehicle(char vehicleType[]) {
    static int count = 0;
    static int total = 0;

    count++;
    total += RATE;

    printf("Vehicle: %s | Toll: %d PKR | Vehicles so far: %d | Revenue so far: %d PKR\n",
           vehicleType, RATE, count, total);
}

int main() {
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");
    processVehicle("Car");

    return 0;
}
