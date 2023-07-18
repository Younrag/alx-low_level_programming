#include "main.h"

/**
 * _islower - return 1 if c is lowercase else return 0
 */
int _islower(int c);
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
