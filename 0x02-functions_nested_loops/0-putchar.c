#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 *
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
