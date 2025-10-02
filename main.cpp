#include <iostream>
#include <vector>
#include "functions.h"


int main() {
    int number;
    std::cin >> number;
    
    std::vector<int> result = numberToBits(number);
    
    std::cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]\n";
    
    return 0;
}