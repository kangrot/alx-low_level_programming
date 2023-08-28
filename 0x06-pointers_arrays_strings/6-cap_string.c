#include "main.h"
/**
 * cap_string - capitalizes words
 * @s: string to be capitalized
 *
 * Return: returns the character
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 97 && s[i] <= 122))
			{
				s[i] -= 32;
				continue;
			}
		}
		else if (s[i] == ' ')
		{
			++i;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] += 32;
			}
		}
	}
	return (s);
}
