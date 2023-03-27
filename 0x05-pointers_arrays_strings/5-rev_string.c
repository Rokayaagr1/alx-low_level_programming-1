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
    int result = 0;
    int digit;

    while (*s)
    {
        if (*s == '-')
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';

            // Check for potential overflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            result = result * 10 + digit;
        }
        else if (result > 0)
            break;

        s++;
    }

    return sign * result;
}