#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: the dogs owner
 *
 * Description: its a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
