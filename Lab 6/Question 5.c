#include <stdio.h>

unsigned long long catalan(int n) {
    unsigned long long result = 1;
    int k;

    for (k = 0; k < n; k++) {
        result = result * 2 * (2 * k + 1) / (k + 2);
    }

    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Catalan number C(%d) = %llu\n", n, catalan(n));

    return 0;
}