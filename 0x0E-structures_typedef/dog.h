#ifndef dog_h
#define dog_h

/**
 * struct dog - Short description
 * @name: First member
 * @owner: Second member
 * @age: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

 /**
 * dog_t - Typedef for unsigned int
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
