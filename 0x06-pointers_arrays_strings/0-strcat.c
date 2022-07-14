#include "main.h"



/**
 * _strcat - concatenates two strings
 *
 * @dest: appendix
 * @src: addidtional
 *
 * Return: return string 
 */



char *_strcat(char *dest, char *src)

{

	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
