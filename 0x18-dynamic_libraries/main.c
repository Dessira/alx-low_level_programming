#include "play.h"
/**
 * main - entry block
 * Return: int
 */
int main(void)
{
	int a = 50;
	int b = 30;
	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	printf("%d\n", mod(a, b));
	return (0);
}
