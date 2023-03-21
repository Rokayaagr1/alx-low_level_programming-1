#include <stdint.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main()
{
    uint64_t a = 1, b = 2, c;
    int i;

    // Print the first two Fibonacci numbers
    putchar('1');
    for (i = 0; i < 48; i++) {
        putchar(',');
        putchar(' ');
        putchar(b / 10 + '0');
        putchar(b % 10 + '0');
        c = a + b;
        a = b;
        b = c;
    }
    putchar('\n');

    return 0;
}
