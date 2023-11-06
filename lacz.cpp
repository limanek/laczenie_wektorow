#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

std::vector<int> concatenateVector(std::vector<int> vec11, std::vector<int> vec22) {
    std::vector<int> allvec;
    for(auto element: vec11) {
        allvec.push_back(element);
    }
    for(auto element: vec22) {
        allvec.push_back(element);
    }
    return allvec;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}