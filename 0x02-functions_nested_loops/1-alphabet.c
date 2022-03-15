#include "main.h"
/**
 * main - Entry point
 * Description: print alphabet in lower case 
 * Return: 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; 'a' < 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
