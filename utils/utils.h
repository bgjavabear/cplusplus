//
// Created by Aleksandr Kiselov on 11.10.2020.
//

#ifndef ACCELARATED_UTILS_H
#define ACCELARATED_UTILS_H

namespace bgagvabear {
    void swap(int i, int j, int *arr);

    void printArr(int *arr, int size);

    void performance_check(int *(*f)(int *arr, int size), int *arr, int size, int numberOfIterations);

    void copy(const int *src, int *dest, int size);
}
#endif //ACCELARATED_UTILS_H
