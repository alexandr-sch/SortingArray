#include <gtest/gtest.h>
#include "optimized_bubble_sort.h"

TEST(OptimizedBubbleSort, SortsCorrectly) {
    std::vector<int> arr = { 5, 1, 4, 2, 8 };
    optimized_bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 4, 5, 8}));
}

TEST(OptimizedBubbleSort, EmptyArray) {
    std::vector<int> arr = {};
    optimized_bubble_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(OptimizedBubbleSort, SingleElement) {
    std::vector<int> arr = { 55 };
    optimized_bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{55}));
}
