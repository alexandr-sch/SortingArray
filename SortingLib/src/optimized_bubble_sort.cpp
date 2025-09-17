#include "optimized_bubble_sort.h"

void optimized_bubble_sort(std::vector<int>& arr) {
    bool f;
    for (size_t i = 0; i < arr.size(); i++) {
        f = false;
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                f = true;
            }
        }
        if (!f) break;
    }
}
