#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - string length.
 * @s: string to evaluate.
 * Return: string length.
 *
 */

int _strlen(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	return (f);
}


/**
 * *_strcpy - copies string.
 * @dest: pointer ti the buffer.
 * @src: string to be copied.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0, i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to the dog, NULL otherwise.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

