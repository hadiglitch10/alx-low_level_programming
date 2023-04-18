#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Desc: header file
 */
struct dog
{
	char *name, *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif