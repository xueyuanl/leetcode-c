//
// Created by hsuehyuan li on 2019-04-19.
//
#include <stdlib.h>
#include <assert.h>
#include "array.h"

ArrayList *arraylist_create() {
    ArrayList *array_lsit = malloc(sizeof(ArrayList));
    array_lsit->size = 0;
    array_lsit->capacity = INITIAL_CAPACITY;
    array_lsit->data = calloc(INITIAL_CAPACITY, sizeof(void *));
    return array_lsit;
}

ArrayList *arraylist_add(ArrayList *list, const void *data) {
    if (list->size == list->capacity) {
        size_t new_cap = list->capacity * 1.5 + 1;
        list->data = realloc(list->data, sizeof(void *) * new_cap);
        list->capacity = new_cap;
    }

    list->data[list->size++] = data;
    return list;
}

void *arraylist_get(const ArrayList *list, const size_t i) {
    if (i <= list->size) {
        return list->data[i];
    }
    return NULL;
}

ArrayList *arraylist_set(ArrayList *list, const size_t i, const void *data) {
    list->data[i] = data;
    return list;
}

void *arraylist_remove(ArrayList *list, const size_t index) {
    assert(list->size > index);
    void *value = list->data[index];
    for (size_t i = index; i + 1 <= list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
    return value;
}

ArrayList *arraylist_clear(ArrayList *list) {
    list->size = 0;
    list->capacity = INITIAL_CAPACITY;
    free(list->data);
    list->data = calloc(INITIAL_CAPACITY, sizeof(void *));
    return list;
}

