#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(unsigned long long);
int main()
 {
    unsigned long long num;
    printf("Enter a number: ");
    scanf("%llu", &num);

    if (isPrime(num)) {
        printf("%llu is prime.\n", num);
    } else {
        printf("%llu is not prime.\n", num);
    }

    return 0;
}
bool isPrime(unsigned long long n)
 {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

  return true;
}