#include <stdio.h>

int gcd(int m, int n) {
    if (n == 0)
        return m;
    else if (n > m)
        return gcd(n, m);
    else
        return gcd(n, m % n);
}

void main() {
    int k, m, n;
    printf("Enter Three Numbers: \n");
    scanf("%d %d %d", &k, &m, &n);
    printf("GCD (%d %d %d) = %d\n", k, m, n, gcd(gcd(k, m), n));
}
