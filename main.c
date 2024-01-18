#include "monty.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
<<<<<<< HEAD
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
=======
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
>>>>>>> 107b1b55431f7285721d72727d34a8c70af25102
	}
	open_file(argv[1]);
	free_nodes();
	return (0);
}
