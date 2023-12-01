#include <stdio.h>

int main() {
    int X;

    // Input
    scanf("%d", &X);

    // Output six consecutive odd numbers
    for (int i = X, count = 0; count < 6; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            count++;
        }
    }

    return 0;
}
