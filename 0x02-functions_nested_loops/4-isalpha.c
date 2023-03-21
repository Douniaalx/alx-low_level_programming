#include "main.h"
/**
 * _isalpha - that checks for alphabetic character
 * main - is the main function
 * @c: The character to print
 * Return:1 if it's a lowercase and 0 otherwise
*/
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
