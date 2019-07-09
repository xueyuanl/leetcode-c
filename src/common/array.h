//
// Created by hsuehyuan li on 2019-04-19.
//

#ifndef LEETCODE_C_ARRAY_H
#define LEETCODE_C_ARRAY_H
#define len(array) (sizeof(array) / sizeof(array[0]))

#define INITIAL_CAPACITY 4
typedef struct {
    size_t size;
    size_t capacity;
    void **data;
} ArrayList;

ArrayList *arraylist_create();

ArrayList *arraylist_add(ArrayList *list, const void *data);

void *arraylist_get(const ArrayList *list, const size_t i);

ArrayList *arraylist_set(ArrayList *list, const size_t i, const void *data);

void *arraylist_remove(ArrayList *list, const size_t i);

ArrayList *arraylist_clear(ArrayList *list);

#endif //LEETCODE_C_ARRAY_H