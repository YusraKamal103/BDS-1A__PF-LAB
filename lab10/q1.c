#include <stdio.h>

int calculateChecksum(int n) {
    if (n < 10)
        return n;
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return calculateChecksum(s);
}

int main() {
    int id;
    printf("Enter transaction ID: ");
    scanf("%d", &id);
    printf("Checksum: %d\n", calculateChecksum(id));
    return 0;
}
