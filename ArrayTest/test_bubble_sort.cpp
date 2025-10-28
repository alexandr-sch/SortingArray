#include <gtest/gtest.h>
#include "bubble_sort.h"

TEST(BubbleSort, SortsCorrectly) {
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{11, 12, 22, 25, 34, 64, 90}));
}

TEST(BubbleSort, EmptyArray) {
    std::vector<int> arr = {};
    bubble_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(BubbleSort, SingleElement) {
    std::vector<int> arr = { 123 };
    bubble_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{123}));
}