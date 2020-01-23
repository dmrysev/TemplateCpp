#include "my_library.h"
#include <iostream>

namespace MyStaticLib {

double add2(double input) {
    auto a = input + 2;
    return a;
}

}