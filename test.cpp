#include <gtest/gtest.h>
#include <string>
#include <iostream>

long eliminate_unset_bits(std::string number);

TEST(EliminateUnsetBitsTest, BasicTests) {
    EXPECT_EQ(eliminate_unset_bits("1101010101010101"), 511);  
    EXPECT_EQ(eliminate_unset_bits("111"), 7);
    EXPECT_EQ(eliminate_unset_bits("1000000"), 1);
    EXPECT_EQ(eliminate_unset_bits("000"), 0);
    EXPECT_EQ(eliminate_unset_bits("1010101"), 15);
    EXPECT_EQ(eliminate_unset_bits("1"), 1);
    EXPECT_EQ(eliminate_unset_bits("0"), 0);
    EXPECT_EQ(eliminate_unset_bits("0101010"), 7);
}

TEST(EliminateUnsetBitsTest, EmptyString) {
    EXPECT_EQ(eliminate_unset_bits(""), 0);
}

TEST(EliminateUnsetBitsTest, AllOnes) {
    EXPECT_EQ(eliminate_unset_bits("1111111111"), 1023); 
}

TEST(EliminateUnsetBitsTest, AllZeros) {
    EXPECT_EQ(eliminate_unset_bits("0000000000"), 0);
}

TEST(EliminateUnsetBitsTest, MixedCharacters) {
    EXPECT_EQ(eliminate_unset_bits("1010101010101010101010101"), 8191);
}
