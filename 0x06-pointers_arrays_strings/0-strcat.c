#include "main.h"

/*
 * Task 0. strcat
 */

/**
  * _strcat - Beginning point
  *
  * @src: Original string pointer 
  * @dest: Append string pointer
  *
  * Objectif: Concatenate two strings
  *
  * Return: The pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	/* String size count variable declaration */
	int count = 0;
	/* Append variable declaration */
	int append = 0;

	/* String size count loop */
	while (dest[count] != '\0')
	{
		count++;
	}

	/* Append string from 'src' to 'dest' loop */
	for (; src[append] != '\0'; append++)
	{
		dest[count] = src[append];
		count++;
	}

	/* Terminating null byte */
	dest[count] = '\0';

	return (dest);
}
