#include <stdint.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
    int count = 50;
    long a = 1, b = 2, c;

    printf("%ld", a);
    for (int i = 2; i <= count; i++) {
        printf(", %ld", b);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
