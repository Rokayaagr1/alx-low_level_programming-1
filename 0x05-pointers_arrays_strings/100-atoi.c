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
    int num = 0;
    int found_num = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
        {
            found_num = 1;
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
                return sign == -1 ? INT_MIN : INT_MAX;
            num = num * 10 + (*s - '0');
        }
        else if (found_num)
            break;

        s++;
    }

    return num * sign;
}
