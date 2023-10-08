#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by 'src'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
