#include <unistd.h>
/**
* _putchar - write  a single character.
* @c: The character to print
* Return: 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
