#include "main.h"
#include <stdio.h>
/**
 * _strstr -  main descripttion
 * @haystack: string where to search
 * @needle: string to search
 * Return: char * string
 */

char *_strstr(char *haystack, char *needle)
{

if (haystack == NULL || needle == NULL)
return (NULL);

if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
if (*haystack == needle[0])
{
if (compara(haystack, needle))
return (haystack);
}
haystack++;
}

return (NULL);
}
