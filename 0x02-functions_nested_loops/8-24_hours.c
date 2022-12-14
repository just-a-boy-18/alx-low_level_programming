#include "main.h"
/*
 * jack_bauer - function that prints every minute of the day , 24 hours clock
 * h = hour, m = minutes
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for ( h = 0; h < 24; h++)
	{
		for ( m = 0; m < 60; m++)
		{
		_putchar('0' + (h / 10));
		_putchar('0' + (h % 10));
		_putchar(':');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar('\n');

		}



	}



}
