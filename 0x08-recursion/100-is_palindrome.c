#include "main.h"
/**
 * _strlen_recursion - gets string lenght
 * @s: string
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare each character of the string
`* @s: string
 * @left: smallest iterator
 * @right: largest iterator
 *
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string == palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s - 1)));
}
