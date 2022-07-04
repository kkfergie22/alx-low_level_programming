#ifndef DOG_H
#define DOG_H
/**
* struct dog - a struct of detais of a dog
* @name: character pointer
* @age: age of the dog
* @owner: owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog - typedef for struct dog
 */
typedef struct dog dog_d;

#endif
