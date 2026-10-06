#include <iostream>
#include <cstdint>

int main() {
    int d = 42;
    int o = 052;
    int h = 0x2A;
    int b = 0b00101010;

    unsigned int u1 = 100u;
    unsigned int u2 = 0xFAU;

    long l = 3000000000L;
    long long ll = 900000000000LL;

    unsigned long ul = 4000000000UL;
    unsigned long long ull = 0xFFFFFFFFFFFFFFFFULL;

    long long b1 = 1'000'000'000LL;
    int h2 = 0xDE'AD'BE'EF;
    int b2 = 0b1101'0010'1111'0101;

    std::cout << d << " " << o << " " << h << " " << b << std::endl;
    std::cout << u1 << " " << std::hex << u2 << std::dec << std::endl;
    std::cout << l << " " << ll << " " << ul << " " << ull << std::endl;
    std::cout << b1 << " " << std::hex << h2 << " " << std::dec << b2 << std::endl;

    return 0;
}
