#include <stdio.h>

/*
 * main - Prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: always 0.
 */

int main(void)

{
	/* Getting the filename from predefined Macros */
	printf("%s\n", __FILE__);
	return (0);
}
