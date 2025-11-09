#include <iostream>

int main(int arc, char* argv[]) {
    std::cout << "Test" << std::endl;
    char test[3] = {'1', '2', '3'};
    for (auto& ch : test) {
        std::cout << ch << std::endl;
    }
    return 0;
}