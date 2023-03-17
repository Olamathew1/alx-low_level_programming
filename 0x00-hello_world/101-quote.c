#include <stdio.h>
#include <unistd.h>

/**
 * main - A c program that prints a line to the standard error
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a new line, to standard error.
 * Code by Maths Sunny
 * Return: 1
*/
 * Return: Always 1
 */

int main(void)

{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
