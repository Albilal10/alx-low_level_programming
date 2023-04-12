
#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *node, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*node = (~(1UL << index) & *node);
	return (1);
}

