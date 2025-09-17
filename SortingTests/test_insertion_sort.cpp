#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(InsertionSort, SortsCorrectly) {
    std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };
    insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 5, 5, 6, 9}));
}

TEST(InsertionSort, EmptyArray) {
    std::vector<int> arr = {};
    insertion_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(InsertionSort, SingleElement) {
    std::vector<int> arr = { 42 };
    insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}
