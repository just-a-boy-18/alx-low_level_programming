#include <stdio.h>
#include "main.h"

/*
 * print_alphabet - Print the alphabet in lowercase, followed by a new line 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char low;

	 for (low='a';low <= 'z'; low++)
	 {
		putchar(low);
	 }	 
		 printf("\n");

}
