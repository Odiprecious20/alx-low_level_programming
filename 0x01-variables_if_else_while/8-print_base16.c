#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
int num = 0;
char letter = 'a';

for (num = 0; num <= 9; num++)
{
putchar(num);
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('/n');

return (0);
}
