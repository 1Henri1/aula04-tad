#ifndef MATRIZ_H
#define MATRIZ_H
#include <stdlib.h>

typedef struct Matriz Matriz;

Matriz* matriz_create(size_t rows, size_t cols);
void matriz_destroy(Matriz* matriz);
void matriz_print(const Matriz* matriz);
double matriz_get(const Matriz* matriz, size_t row, size_t col);
void matriz_set(Matriz* matriz, size_t row, size_t col, double value);
size_t matriz_rows(const Matriz* matriz);
size_t matriz_cols(const Matriz* matriz);

#endif