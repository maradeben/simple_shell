#include "shell.h"

/**
 * _strcpy - strcpy analog
 * Description: copies a string into another
 * @dest: the copy
 * @src: the source (original)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}

/**
 * _strcat - strcat analog
 * Description: concat two strings
 * @_dest: first string
 * @_src: string to join
 * Return: the joined string
 */
char *_strcat(char *_dest, char *_src)
{
	int d_c = 0, s_c = 0;

	while (_dest[d_c] != '\0')
	{
		d_c++;
	}

	while (_src[s_c] != '\0')
	{
		*(_dest + d_c) = _src[s_c];
		d_c++;
		s_c++;
	}

	*(_dest + d_c) = '\0';

	return (_dest);
}

/**
 * _strchr - strchr analog
 * @s: search this string
 * @c: for this character
 * Return: pointer to address of c or NULL if absent
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (*(s + i) != '\0')
		i++;

	for (j = 0; j <= i; j++, s++)
		if (*s == c)
			return (s);

	return (NULL);
}

/**
 * _strncmp - compare n chars of two strings
 * @s1: string one
 * @s2: string two
 * @n: num of chars to compare
 * Return: 0 on match, 1 otherwise
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
