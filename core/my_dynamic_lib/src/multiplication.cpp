#include "my_dynamic_lib/multiplication.hpp"
#include <iostream>

namespace MyProject::MyDynamicLib::Multiplication {

double multBy2(double input) {
    auto a = input * 2;
    return a;
}

}