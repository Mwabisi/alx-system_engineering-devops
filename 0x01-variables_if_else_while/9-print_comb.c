#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
{
	int n;

	for (n = 48; n < 58; n++)
	{
		puntchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
