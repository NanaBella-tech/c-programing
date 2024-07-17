#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d (excluding endpoints):\n", n);
    for (int i = 2; i < n; ++i) {
        printf("%d\n", i);
    }

    return 0;
}
