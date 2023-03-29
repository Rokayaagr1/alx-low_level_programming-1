#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        _puthex(i, 8);
        _putchar(':');
        for (j = i; j < i + 10; j += 2)
        {
            _putchar(' ');
            if (j < size)
                _puthex(*(b + j), 2);
            else
                _putstr("  ");
            if (j + 1 < size)
                _puthex(*(b + j + 1), 2);
            else
                _putstr("  ");
        }
        _putstr(" ");
        for (j = i; j < i + 10 && j < size; j++)
            _putchar(*(b + j) >= 32 && *(b + j) <= 126 ? *(b + j) : '.');
        _putchar('\n');
    }
}

/**
 * _puthex - prints a number in hexadecimal
 * @n: number to print
 * @len: minimum length of output
 *
 * Return: void
 */
void _puthex(unsigned int n, int len)
{
    if (len > 1)
        _puthex(n >> 4, len - 1);
    _putchar("0123456789abcdef"[n & 0xf]);
}

/**
 * _putchar - writes a character to stdout
 * @c: character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return (write(1, &c, 1) == 1 ? 1 : -1);
}

/**
 * _putstr - writes a string to stdout
 * @str: string to write
 *
 * Return: number of characters written
 */
int _putstr(char *str)
{
    int i;

    for (i = 0; *(str + i); i++)
        _putchar(*(str + i));
    return (i);
}