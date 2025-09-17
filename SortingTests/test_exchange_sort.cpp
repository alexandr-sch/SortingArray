#include <gtest/gtest.h>
#include "exchange_sort.h"

TEST(ExchangeSort, SortsCorrectly) {
    std::vector<int> arr = { 3, 0, 2, 5, -1, 4, 1 };
    exchange_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-1, 0, 1, 2, 3, 4, 5}));
}

TEST(ExchangeSort, EmptyArray) {
    std::vector<int> arr = {};
    exchange_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(ExchangeSort, SingleElement) {
    std::vector<int> arr = { 99 };
    exchange_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{99}));
}
