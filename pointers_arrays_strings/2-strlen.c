#include "main.h"
/**
 * _strlen - function name
 * @s: function parameter
 * return: the length of the string
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);
}
