#include <unistd.h>
#include "main.h"

/**
 * main - print _putchar
 * Return: always 0
 */

int main(void)
{
	char *holberton = "Holberton";

	while (*holberton)
	{
		_putchar(*holberton);
	holberton++;
	}
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	"return (0);"

}
