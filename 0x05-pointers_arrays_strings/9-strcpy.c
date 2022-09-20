#include "main.h"

/**
 * *_strcy - copies the string pointed to by src
 * @dest: pointer to str of destination
 * @src: pointer to str origin
 * Return: string
 */
char *_strcy(char *dest, char *src)
{
	int len = 0;
	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
