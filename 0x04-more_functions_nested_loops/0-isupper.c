#include "main.h"
/**
 *  *  _isupperr  -  function to check if
 *   *	character is uppercase
 *    *
 *     *  @c : checks input of function
 *      *
 *       * Return: returns 1 if 'c' is lowercase
 *        *	otherwise alwys 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
			return (1);
	else
			return (0);
}
