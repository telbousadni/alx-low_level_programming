#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name, age and owner
 * @name: type char*
 * @age: type int
 * @owner: type char*
 *
 *
 */

struct dog
{
	char *name;
	int age;
	char *owner;
};
typedef struct dog dog_t;
#endif
