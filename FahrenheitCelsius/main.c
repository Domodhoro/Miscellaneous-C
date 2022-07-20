#include <stdio.h>

int main() {
    float fahrenheit = 0.0f, celsius = 0.0f;

    int step = 20;
    while (fahrenheit != 300) {
        celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);

        printf("(Fahrenheit) %3.0f (Celsius) %6.1f\n", fahrenheit, celsius);

        fahrenheit += step;
    }
    getchar();

    return 0;
}
