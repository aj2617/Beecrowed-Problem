#include <stdio.h>

int main() {
    int X, Y;

    // Input
    scanf("%d%d", &X, &Y);

    // Ensure X is smaller than Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    int sum = 0;

    // Calculate sum of odd numbers between X and Y
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Output
    printf("%d\n", sum);

    return 0;
}

