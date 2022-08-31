#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static int fibonacci(int);

int main(int argc, char* argv[]) {
    int n = 0, i = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (i < n) {
        printf("F(%d) = %d\n", i, fibonacci(++i));
    }

    fflush(stdin);
    getchar();
    printf("\nPRESS ENTER TO EXIT...");
    getchar();

    return EXIT_SUCCESS;
}

static int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
