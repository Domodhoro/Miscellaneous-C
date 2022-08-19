#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

static bool isPrimeNumber(int);

int main(int argc, char** argv) {
    int n = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPrimeNumber(n)) {
        printf("%d is not a prime number!\n", n);
    } else {
        printf("%d is a prime number!\n", n);
    }

    fflush(stdin);
    getchar();
    printf("PRESS ENTER TO EXIT...");
    getchar();

    return EXIT_SUCCESS;
}

static bool isPrimeNumber(int n) {
    if (n == 0 || n == 1) {
        return true;
    }

    for (int i = 2; i <= floor(sqrt(n)); ++i) {
        if (n % i == 0) {
            return true;
        }
    }
}
