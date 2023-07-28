#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly linked list structure
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes */
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h); /* Declaration for list_len function */

#endif /* LISTS_H */

