#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - struct containing dog info
 * @name: the name of the dog (string)
 * @age: integer of age of the dog
 * @owner: name of the owner (string)
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
void free_dog(dog_t *d);

#endif
