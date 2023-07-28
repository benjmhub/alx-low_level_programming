#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structure for the linked list node */
typedef struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes */
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h); /* Change the return type here to size_t */

#endif /* LISTS_H */

