#include "array_dinamico.h"


struct ArrayDinamico {
    int* data;
    size_t size;
    size_t capacity;
}

ArrayDinamico* array_dinamico_create(void){
    ArrayDinamico* array = malloc(sizeof(ArrayDinamico));
    array->size = 1;
    array->capacity = 1;
    array->data = malloc(sizeof(int));
}

void array_dinamico_destroy(ArrayDinamico* array){
    free(array->data);
    free(array);
}

void array_dinamico_print(ArrayDinamico* array){
    for(size_t i = 0; i<array->size; i++){
            printf("%d ", array->data[i]);
        }
}

int array_dinamico_get(ArrayDinamico* array, size_t index){
    return array->data[index];
}

void array_dinamico_set(ArrayDinamico* array, size_t index, int value){
    array->data[index] = value;
}

size_t array_dinamico_capacity(ArrayDinamico* array){
    
}

size_t array_dinamico_add(ArrayDinamico* array, int value);