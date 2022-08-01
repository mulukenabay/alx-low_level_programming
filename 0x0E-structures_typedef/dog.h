#include <stdio.h>

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} struct dog my_dog;

int main(void)
{
	my_dog.name = "poppy";
	my_dog.age = "3.5";
	my_dog.owner = "Bob";
}

