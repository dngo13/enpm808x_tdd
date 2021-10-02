/**
 * Copyright main_cpp [2021] Version 1.0
 * @file main.cpp
 * @author Part1 1.Diane Ngo (dngo13) (driver) 2.Ameya Konkar (Navigator)
 * @author part2 1.Yash Kulkarni (driver) 2.Aditi Ramadwar (Navigator)
 * @brief Main fileto run test cases defined in
 * test.cpp
 */

/// Header files ///
#include <gtest/gtest.h>

/**
 * @fn int main(int, char**)
 * @brief Runs all the test cases specified in
 * test.cpp
 */

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
