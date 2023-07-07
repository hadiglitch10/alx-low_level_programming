#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int value = 0x01020304;

	char *byte = (char *)&value;

	return ((byte[0] == 0x04) ? 1 : 0);
}
