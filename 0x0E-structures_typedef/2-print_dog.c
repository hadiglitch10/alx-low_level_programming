#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Prints name, age and owner if not null.
 * @d: is pointer to the struct dog.
**/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d.name ? d.name : "(nil)");
		printf("Age: %f\n", d.age);
		printf("owner: %f\n", d.owner ? d.owner : "(nil)";
	}
}
