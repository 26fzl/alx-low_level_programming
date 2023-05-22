#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - find the length of a string
 * @str: the string
 * Return: the length of string
 */
int _strlen(char *str)
{
	int l;

	l = 0;

	for (; *str != '\0'; str++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - create a copy
 * @dest: where the string is copied
 * @src: string to copy
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if the function fails otherwise pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = _strlen(name);
	int o = _strlen(owner);
	int l;
	char *dog_name = malloc(sizeof(char) * (o + 1));
	char *dog_owner = malloc(sizeof(char) * (n + 1));
	
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	if (dog_name == NULL || dog_owner == NULL)
	{
		free(dog);
		free(dog_name);
		free(dog_owner);
		return (NULL);
	}

	for (l = 0; l <= n; l++)
	{
		dog_name[l] = name[l];
	}

	for (l = 0; l <= o; l++)
	{
		dog_owner[l] = owner[l];
	}

	dog->name = dog_name;
	dog->owner = dog_owner;
	dog->age = age;

	return (dog);
}


