#include <iostream>
#include "my_static_lib/addition.hpp"

using namespace MyProject;

int main() {
    double result = MyStaticLib::Addition::add2(2);
    std::cout << "2 + 2 = " << result << std::endl;
    return 0;
}
