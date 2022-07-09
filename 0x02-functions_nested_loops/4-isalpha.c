#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 *
 * Return: 1 if c is letter, lowercase or uppercase otherwise 0
 */
void test _isalpha(int n)
{
int r;

r = _isalpha(n);
_putchar(r + '0');
_putchar('\n');
}
/**
 * main - check the code for best school.
 *
 * Return: Always 0.
 */
int main (void)
{
	test_isalpha('H');
	return (0);
 }
