#include <string.h>
#include "main.h"

char *_strstr(char *haystack, char *needle);

/**
 * _strstr - Search for a substring in haystack
 * @haystack: To string to within
 * @needle: substring to be search
 * Return: Pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
