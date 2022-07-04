#ifndef dog_H
#define dog_H
/**
 * struct dog - dog struct with name, age and owner fields
 * @name: name property
 * @age: age property
 * @owner: owner property
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
