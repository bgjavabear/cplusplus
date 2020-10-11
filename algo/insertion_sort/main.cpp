#include <iostream>
#include "../../utils/utils.h"

using namespace std;

int *insertionSort(int *input, int size);

int main() {
    int input[10] = {16, 2, 3, 75, 46, 0, 4, 123, 78, 11};
    int inputSize = *(&input + 1) - input;
    bgagvabear::performance_check(insertionSort, input, inputSize, 1000000);
}

int *insertionSort(int *input, int size) {
    int result[size];
    bgagvabear::copy(input, result, size);
    int i = 1;
    while (i < size) {
        int j = i;
        while (j > 0 && result[j - 1] > result[j]) {
            bgagvabear::swap(j, j - 1, result);
            j--;
        }
        i++;
    }
    return result;
}