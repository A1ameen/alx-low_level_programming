#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		int found = 0;

		for (int r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;

		s++;
	}
	return (n);
}
