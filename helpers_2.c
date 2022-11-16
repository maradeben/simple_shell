#include "shell.h"

/**
 * _strcmp - strcmp analog
 * Description: cmpare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if same, difference otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i, l1 = 0, l2 = 0;


	while (*(s1 + l1) != '\0')
		l1++;
	while (*(s2 + l2) != '\0')
		l2++;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] !=  s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 * _isalpha - check alphabet
 * Description: checks if it's an alphabet
 * @c: an ASCII character
 * Return: 1 if it's alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}

/**
 * _itoa - Convert Integer To Char
 * @n: Int To Convert
 * Return: Char Pointer
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = numlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}

/**
 * array_rev - reverse an array
 * @a: the array of integers
 * @n: length of array
 * Return: void returns none
 */
void array_rev(char *a, int n)
{
	int half = n / 2;
	int start = 0;
	int end = n - 1;
	int temp;

	for ( ; start < half; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}

/**
 * numlen - get length of a number
 * @num: the number
 * Return: the length
 */
int numlen(int num)
{
	if (num < 10)
		return (1);
	else
		return (1 + numlen(num / 10));
}
