#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);
	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
