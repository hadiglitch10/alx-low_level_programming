#include "main.h"
#include "string.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
**/

void rev_string(char *s)
{
	int fst = 0, len = strlen(s), last;
	char box;

	for (last = len - 1; last >= len / 2; last--)
	{
		box = s[last];
		s[last] = s[fst];
		s[fst] = box;
		fst++;
	}
}
