#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;
    int result = ~number + 1;
    std::cout << result << std::endl;
    return 0;
}
