#include <gtest/gtest.h>
#include <vector>
#include "../functions.h"

TEST(NumberToBitsTest, HandlesOne) {
    std::vector<int> expected(32, 0);
    expected[31] = 1;
    
    std::vector<int> result = numberToBits(1);
    
    EXPECT_EQ(result, expected);
}

TEST(NumberToBitsTest, HandlesZero) {
    std::vector<int> expected(32, 0);
    
    std::vector<int> result = numberToBits(0);
    
    EXPECT_EQ(result, expected);
}

TEST(NumberToBitsTest, HandlesMultipleBits) {
    std::vector<int> expected(32, 0);
    expected[29] = 1; 
    expected[31] = 1; 
    
    std::vector<int> result = numberToBits(5);
    
    EXPECT_EQ(result, expected);
}

TEST(NumberToBitsTest, HandlesMaxPositive) {
    int max_positive = 2147483647;
    std::vector<int> result = numberToBits(max_positive);
    
    EXPECT_EQ(result[0], 0);
    for (int i = 1; i < 32; i++) {
        EXPECT_EQ(result[i], 1);
    }
}

TEST(NumberToBitsTest, HandlesNegativeNumber) {
    std::vector<int> expected(32, 1);
    
    std::vector<int> result = numberToBits(-1);
    
    EXPECT_EQ(result, expected);
}

TEST(NumberToBitsTest, Handles255) {
    std::vector<int> result = numberToBits(255);
    
    for (int i = 24; i < 32; i++) {
        EXPECT_EQ(result[i], 1);
    }
    for (int i = 0; i < 24; i++) {
        EXPECT_EQ(result[i], 0);
    }
}