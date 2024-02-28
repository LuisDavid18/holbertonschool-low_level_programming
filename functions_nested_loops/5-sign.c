#include "main.h"

/**
  *print_sign - funcion main
  *
  *@n: caracter a comparar
  *
  *Return: si 1 es positivo, si 0 es zero, -0 es negativo
  *
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
			return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	_putchar ('-');
			return (-1);
}
