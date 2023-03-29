#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */

char *string_toupper(char *s)
{
        while (*s) //if s exists will omit null terminator
	    if (*s >= 'a' && *s <= 'z')
	        *s = *s -'a' + 'A';
	    s++;
}