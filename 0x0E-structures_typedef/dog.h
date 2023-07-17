#ifndef dog_h
#define dog_h

/**
* struct dog - struct dog
* @name: name of dog
* @age: age of dog
* @owner:  owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
