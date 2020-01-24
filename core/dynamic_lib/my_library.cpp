#include "my_library.h"
#include <iostream>

namespace MyDynamicLib {

double multBy2(double input) {
    auto a = input * 2;
    return a;
}

}