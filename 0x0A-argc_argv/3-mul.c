#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	j = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
