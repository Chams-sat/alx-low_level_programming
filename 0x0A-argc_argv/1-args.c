#include <stdio.h>

/**
 * main - print number of arguments passed
 *
 * @argc: num of commandline arguments
 * @argv: pointer to an array of commandline arguments
 *
 * Return: 0 if success, non for fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
