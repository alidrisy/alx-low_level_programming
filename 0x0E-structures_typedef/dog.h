#ifndef _DOG_H
#define _DOG_H
/**
* struct dog - set three variables
* @name: frist member char
* @age: second member int
* @owner: third
* Description: this is
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
