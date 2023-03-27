#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string
 *
 * Return: integer value of string, or 0 if no digits are found
 */
int _atoi(char *s)
{
    int sign = 1;
    long result = 0;

    while (*s)
    {
        if (*s == '-')
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
        {
            // Check for overflow
            if (sign == 1 && result * 10 + (*s - '0') > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -result * 10 - (*s - '0') < INT_MIN)
                return INT_MIN;
            result = result * 10 + (*s - '0');
        }
        else if (result > 0)
            break;

        s++;
    }

    return (int)(sign * result);
}