#include <stdio.h>
/**
 * main - Entry point
 * Description: main prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 if Success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
