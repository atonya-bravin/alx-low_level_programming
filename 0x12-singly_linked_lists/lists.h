#ifndef LINKED_LIST
#define LINDED_LIST

#include <stddef.h>

typedef struct list list_t;

struct list
{
	char *str;
	int len;
	list_t *next;
};

size_t print_list(const list_t *h);

#endif
