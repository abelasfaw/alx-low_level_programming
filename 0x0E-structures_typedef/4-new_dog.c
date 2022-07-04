#include "dog.h"
#include <stdlib.h>
/**
 * _str_cpy - copy string
 * @str1: string to copy from
 * @str2: string to copy to
 * Return: s2
 */
char *_str_cpy(char *str1, char *str2)
{
	char ch;
	int index;

	index = 0;
	ch = *(str1 + index);
	while (ch != '\0')
	{
		*(str2 + index) = ch;
		index += 1;
		ch = *(str1 + index);
	}
	*(str2 + index) = '\0';
	return (str2);
}
/**
 * new_dog - creates new dog
 * @name: name of struct dog to create
 * @age: age of struct dog to create
 * @owner: owner of struct dog to create
 * Return: pointer to newwly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(sizeof(name));
	owner_copy = malloc(sizeof(owner));
	if (name_copy == NULL || owner_copy == NULL)
	{
		return (NULL);
	}
	name_copy = _str_cpy(name, name_copy);
	owner_copy = _str_cpy(owner, owner_copy);
	dog->name = name_copy;
	dog->owner = owner_copy;
	dog->age = age;
	return (dog);
}
