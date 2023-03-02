#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @dest: input value
 *
 * Return: void
 */
char  *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	while (desc[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
