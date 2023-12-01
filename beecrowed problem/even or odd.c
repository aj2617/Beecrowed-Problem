#include <stdio.h>

int main() {
    int N, X;

    // Input
    printf("Enter the number of test cases (N): ");
    scanf("%d", &N);

    // Process each test case
    for (int i = 0; i < N; i++) {
        // Read the integer value
        printf("Enter integer value X: ");
        scanf("%d", &X);

        // Check and print the corresponding message
        if (X == 0) {
            printf("NULL\n");
        } else {
            // Check if the value is odd or even
            if (X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            // Check if the value is positive or negative
            if (X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}
