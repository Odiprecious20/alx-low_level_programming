#include "main.h"

/**
 * swap_int - swaps values of two integgers
 * @a: is an integer
 * @b: is an integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
