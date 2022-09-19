#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *@dest: char type string
 *@src: char type string
 * Description: copy the string pointed to by pointer "src"
 * to the buffer pointed by 'dest'
 * Return: pointer to dest
 */
<<<<<<< HEAD
int main (void)
{
	int i;
=======
>>>>>>> 72b8651e37c8d6d61912b3ba6db928b2201ad8a7

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
