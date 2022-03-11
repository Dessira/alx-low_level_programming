#include <stdio.h>
/**
 * main - main block
 * Description: Print both lowercase and uppercase using putchar.
 * Return: 0
 */
int main(void)
{
	char c;
	char m;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
