#include <iostream>
#include "my_library.h"

int main() {
    double result = MyStaticLib::add2(2);
    std::cout << "2 + 2 = " << result << std::endl;
    return 0;
}
