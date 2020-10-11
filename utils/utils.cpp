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

    void performance_check(void (*f)(int *arr, int size), int *arr, int size) {
        auto start = std::chrono::high_resolution_clock::now();
        f(arr, size);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = duration_cast<std::chrono::nanoseconds>(end - start);
        std::cout << "Function executed in " << duration.count() << " nanoseconds." << std::endl;
    }
}

