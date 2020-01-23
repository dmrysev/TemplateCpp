#include "my_library.h"

#include <gtest/gtest.h>


TEST(MyLibrary, givenNumber_callingAdd2_mustReturnNumberIncreasedBy2) {
    // ARRANGE
    double input1 = 10.5;
    double input2 = 12.3;

    // ACT
    double result1 = MyStaticLib::add2(input1);
    double result2 = MyStaticLib::add2(input2);

    // ASSERT
    ASSERT_EQ(result1, 12.5);
    ASSERT_EQ(result2, 14.3);
}
