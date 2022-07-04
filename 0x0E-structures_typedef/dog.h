#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: King CEO
 * Desc: Header file that defines a new type struct dog.
 */

/*
 * struct dog - new type describing dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
