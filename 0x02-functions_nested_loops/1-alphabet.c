#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets.
 *
 * Return: Always success
 */

void print_alphabet(void)
{
		char alp = 'a';

		while (alp <= 'z')
		{
			_putchar (alp);
			alp++;

		}
		_putchar ('\n');

}
