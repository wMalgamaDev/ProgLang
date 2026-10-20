#include <iostream>

namespace H {
    void sayHello() {
        std::cout << "Hello" << std::endl;
    }
}

namespace B {
    void sayGoodbye() {
        std::cout << "Bye" << std::endl;
    }
}
int main() {
    H::sayHello();
    B::sayGoodbye();
    
    return 0;
}
