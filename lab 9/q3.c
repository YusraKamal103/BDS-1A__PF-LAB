#include <stdio.h>

int main() {
    int image[3][3];
    int (*ptr)[3] = image;

    printf("Enter 9 pixel values:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", *(ptr + i) + j);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(ptr + i) + j) *= 2;
        }
    }

    printf("Updated image matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
