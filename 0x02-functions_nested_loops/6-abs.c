#include "main.h"
/**
 * _abs - a function that absolute value of an integer
 * @j: integer input
 * Return: absolute value of j
 */
int _abs(int j)
{
	return (j * ((j > 0) - (j < 0)));
}
