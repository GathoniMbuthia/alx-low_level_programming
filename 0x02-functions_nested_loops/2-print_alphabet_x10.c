#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar('\n');
	}
}
