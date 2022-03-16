#include "main.h"

/**
 * _isalpha - check for lowercase or uppercase characters
 * @c: the character to check
 * Return: On success 1 else 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
