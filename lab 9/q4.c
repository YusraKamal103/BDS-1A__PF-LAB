#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int compute(int a, int b, int (*func)(int, int)) {
    return func(a, b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Sum: %d\n", compute(x, y, add));
    printf("Product: %d\n", compute(x, y, multiply));
    printf("Maximum: %d\n", compute(x, y, findMax));

    return 0;
}
```[cite: 4]
