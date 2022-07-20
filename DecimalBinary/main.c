#include <stdio.h>
#include <math.h>

int convert(long int);

int main() {
    long int bin = 0;

    printf("Digite um número binário: ");
    scanf("%lld", &bin);

    printf("%lld (binário) = %d (decimal)", bin, convert(bin));
    getchar();

    return 0;
}

int convert(long int bin) {
    int dec = 0, i = 0, aux = 0;
    while (bin != 0) {
        aux = bin % 10;
        bin /= 10;

        dec += aux * pow(2, i);
        ++i;
    }

    return dec;
}
