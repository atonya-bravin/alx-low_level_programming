#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
