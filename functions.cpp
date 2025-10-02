#include <vector>
#include "functions.h"


std::vector<int> numberToBits(int n) {
    std::vector<int> bits(32, 0);
    for (int i = 0; i < 32; i++) {
        bits[31 - i] = (n >> i) & 1;
    }
    return bits;
}