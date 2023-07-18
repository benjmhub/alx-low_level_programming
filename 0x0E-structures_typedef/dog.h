#ifndef DOG_H
#define DOG_H

/* File: dog.h */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;


void print_dog(struct dog *d);

#endif /* DOG_H */

