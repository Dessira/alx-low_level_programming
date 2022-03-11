#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabet in lower case using putchar.
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{ 
		putchar(c);
	}
	putchar('\n');
	return (0);
}
