#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

struct vector
{
    int size;
    int capacity;
    size_t element_size;
    void *vector;
};

typedef struct vector vector_t;

int initVector(vector_t *vector, size_t element_size);
int initVectorCap(vector_t *vector, int capacity, size_t element_size);
int copyVector(vector_t *dest, const vector_t src);
void freeVector(vector_t vector);
void *vectorPushBack(vector_t *vector, void *value);
void *vectorPop(vector_t *vector);
void *vectorGet(vector_t vector, int index);
int vectorRemove(vector_t *vector, int position);
int vectorSet(vector_t vector, void *value, int position);
void vectorSwap(vector_t vector, int a, int b);
/* TODO REMOVE */
void vector_sort(vector_t vector, int (*compare)(const void *a, const void *b));

#endif