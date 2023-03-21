#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * main - is the main function
 * @n: The character to print
 * Return: 1 and prints + if n>0, 0 and prints 0 if n=0, -1 and prints - if n<0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
