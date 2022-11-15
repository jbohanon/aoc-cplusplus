#include "gtest/gtest.h"
#include "src/2015/1/aoc.h"
#include <fstream>

namespace aoc {
    TEST(worker, returns5) {

        std::fstream f("data/2015/1/test_input_5", std::fstream::in);
        ASSERT_TRUE(f.is_open());
        ASSERT_EQ(worker::calculateFloor(f), 5);
    }
}
