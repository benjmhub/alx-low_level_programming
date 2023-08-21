#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Function prototype for create_array */
char *create_array(unsigned int size, char c);

/* Function prototype for simple_print_buffer */
void simple_print_buffer(char *buffer, unsigned int size);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

#endif /* MAIN_H */
