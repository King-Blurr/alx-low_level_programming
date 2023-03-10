#include "main.h"

/**
 * _abs - Absolute values of numbers
 *
 * Return: the absolute value
 * @v: a number
 */

int _abs(int v)
{
	return (v * ((v > 0) - (v < 0)));
}
