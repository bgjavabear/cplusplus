//
// Created by Aleksandr Kiselov on 11.10.2020.
//

#include "utils.h"
#include <iostream>
#include <chrono>

namespace bgagvabear {
    void swap(int i, int j, int *arr) {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    void printArr(int *arr, int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void copy(const int *src, int *dest, int size) {
        for (int i = 0; i < size; i++) {
            dest[i] = src[i];
        }
    }

    void performance_check(int *(*f)(int *arr, int size), int *arr, int size, int numberOfIterations) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < numberOfIterations; i++) {
            f(arr, size);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = duration_cast<std::chrono::microseconds>(end - start);
        std::cout << "Function executed " << numberOfIterations << " times. It took " << duration.count()
                  << " microseconds"
                  << std::endl;
    }
}

