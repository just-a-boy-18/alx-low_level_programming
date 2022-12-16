#include "main.h"
/**
 * _is upper - a function that checks for upperase character
 * @c: input
 * Return: 1 if c is uppercase .0 otherwise
 */
 int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

}

