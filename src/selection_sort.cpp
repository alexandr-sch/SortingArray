#include "selection_sort.h"

void selection_sort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        size_t min = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
    }
}
