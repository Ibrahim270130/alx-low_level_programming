#include "main.h"

/**
 * main -  prints Holberton, followed by a new line
 * Return: 0.
 */
int main(void)
{
	char word[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	        return (0);
}
