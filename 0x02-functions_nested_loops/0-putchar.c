#include "School.h"

/**
 * main - Entry point
 * Return: Always returns 0 
 *
 */
int main(void)
{
	char ch[] = "School";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
