#include "insertion_sort.h"

void insertion_sort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            if (j == 0) break;
            j--;
        }
        if (arr[j] > key) {
            arr[j + 1] = arr[j];
            arr[j] = key;
        }
        else {
            arr[j + 1] = key;
        }
    }
}
