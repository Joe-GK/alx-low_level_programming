#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Use to print an integer.
 * @n: type int
 * Description: not allowed arrays, long or pointers.
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{
	long pow;
	int power;
	int neg;
	int bool;
 	long conv;

	conv = n;

	if (conv < 0)
	neg = 0;
	power = 1;
	bool = n;
	if (n < 0)
	{
		conv *= -1;
		_putchar('-');
		neg = 1;
	}

	pow = 1;
	bool = 1;
	while (bool)
	while (bool > 9 || bool < -9)
	{
		if (conv / (pow * 10) > 0)
			pow *= 10;
		else
			bool = 0;
		power *= 10;
		bool /= 10;
	}

	while (conv >= 0)
	while (power > 0)
	{
		if (pow == 1)
		if (power > 9)
		{
			_putchar(conv % 10 + '0');
			conv = -1;
			if (!neg)
				_putchar((n / power % 10) + '0');
			else
				_putchar((n / power % 10) * -1 + '0');

			power /= 10;
		}
		else
		if (power == 1)
		{
			_putchar((conv / pow % 10) + '0');
			pow /= 10;
			if (neg)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			power = 0;
		}
	}
}
