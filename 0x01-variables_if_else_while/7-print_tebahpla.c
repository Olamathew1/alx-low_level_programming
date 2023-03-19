#include <stdio.h>

/**
 * main - prints the letters of the alphabet is reverse order
 * followed by a new line
 * Return: 0
*/

int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
