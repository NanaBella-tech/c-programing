#include <stdio.h>

long gcd(long a, long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    long x, y, hcf;
    printf("Enter two integers:\n");
    scanf("%ld %ld", &x, &y);

    hcf = gcd(x, y);

    printf("highest common factor of %ld and %ld = %ld\n", x, y, hcf);

    return 0;
}