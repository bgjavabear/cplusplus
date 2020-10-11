#include <iostream>
#include "../../utils/utils.h"

using namespace bgagvabear;

void insertionSort(int *input, int size);

int main() {
    int input[10] = {16, 2, 3, 75, 46, 0, 4, 123, 78, 11};
    int inputSize = *(&input + 1) - input;
    performance_check(insertionSort, input, inputSize);
}

void insertionSort(int *input, int size) {
    int i = 1;
    while (i < size) {
        int j = i;
        while (j > 0 && input[j - 1] > input[j]) {
            swap(j, j - 1, input);
            j--;
        }
        i++;
    }
}