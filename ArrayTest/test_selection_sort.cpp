#include <gtest/gtest.h>
#include "selection_sort.h"

TEST(SelectionSort, SortsCorrectly) {
    std::vector<int> arr = { 29, 10, 14, 37, 14 };
    selection_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{10, 14, 14, 29, 37}));
}

TEST(SelectionSort, EmptyArray) {
    std::vector<int> arr = {};
    selection_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(SelectionSort, SingleElement) {
    std::vector<int> arr = { 7 };
    selection_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7}));
}