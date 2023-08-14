#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic information about a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: This structure defines the basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * init_dog - initialize a dog structure
 * @d: pointer to the dog structure to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print information about a dog
 * @d: pointer to the dog structure to print
 */
void print_dog(struct dog *d);
/**
 * new_dog - create a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - free memory allocated for a dog structure
 * @d: pointer to the dog structure to free
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copy a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculate the length of a string
 * @s: input string
 * Return: length of the string
 */

int _strlen(char *s);

#endif /* DOG_H */
