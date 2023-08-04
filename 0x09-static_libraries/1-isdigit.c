#include "main.h"
/**
 *  *_isdigit  -  function to check if
 *   *	character is lowercase or uppercase
 *    *
 *     *@c : checks input of function
 *      *
 *       *Return: returns 1 if 'c' is lowercase
 *        *	otherwise alwys 0 (success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
