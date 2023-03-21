#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

void print_last_digit(int n)
{
int last_digit = n % 10;
printf("%d\n", last_digit);
}
