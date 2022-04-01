#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: number of arguments
 * @argv: array 
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
