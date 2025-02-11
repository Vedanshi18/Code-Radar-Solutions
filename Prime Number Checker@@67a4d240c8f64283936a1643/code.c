#include <stdio.h>
#include <math.h>  // For sqrt function

int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int j = 2; j <= sqrt(num); j++) {
        if (num % j == 0) return 0;  // Not a prime number
    }
    return 1;  // Prime number
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
