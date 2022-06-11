#include "main.h"

/**
 * _strspn  -  count similar character return in bytes
 * @s: dtring to count from
 * @accept: string to be counted
 *
 * Return: Number of bytes
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int f;
	int flag;

	f = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);

}
