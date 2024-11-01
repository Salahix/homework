#include <stdio.h>
#include <math.h>

/* Write a function that takes an in integer N (1 <= N <= 10^9) and returns whether N is a prime number or not */

void PrimeNumberCheck ( int N ) {
        if (N <= 1) printf("%d is not prime\n",N);
        for (int i = 2; i <= sqrt(N); i++) {
                if (N % i == 0 ) printf("%d is not prime\n",N);
        }
        printf("%d is a prime \n",N);
}

int main() {
        PrimeNumberCheck(29);
        return 0;
}
