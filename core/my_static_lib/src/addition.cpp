#include "my_static_lib/addition.hpp"
#include <iostream>

namespace MyProject::MyStaticLib::Addition {

double add2(double input) {
    auto a = input + 2;
    return a;
}

}