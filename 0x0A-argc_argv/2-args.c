#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry Point
 *   * @argc: Number of arguments
 *    * @argv: Array of arguments
 *     * Return: 0
 *      */
int main(int argc, char *argv[])
{
		int count;

			printf("Number of arguments: %d\n", argc - 1);

				printf("Arguments:\n");
					for (count = 0; count < argc; count++)
							{
										printf("%s\n", argv[count]);
											}
						return (0);
}
