#ifndef dog_H
#define dog_H
/**
 * struct dog - dog struct with name, age and owner fields
 * @name: name property
 * @age: age property
 * @owner: owner property
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
