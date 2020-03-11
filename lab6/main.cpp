#include <iostream>
#include "Algorithms.h"
#include <vector>

bool funcInt(int x) {
    return x > 0;
}

bool funcSort(int x, int y) {
    return x < y;
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    std::cout << ((none_of(arr.begin(), arr.end(), funcInt)) ? "TRUE" : "FALSE") << std::endl;
    std::cout << ((is_sorted(arr.begin(), arr.end(), funcSort)) ? "TRUE" : "FALSE") << std::endl;
    std::cout << find_not(arr.begin(), arr.end(), 1) << std::endl;
    arr.push_back(-1);
    std::cout << ((is_sorted(arr.begin(), arr.end(), funcSort)) ? "TRUE" : "FALSE") << std::endl;
    return 0;
}