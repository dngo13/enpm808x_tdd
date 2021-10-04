/**
* Copyright (C) 2021 by Aditi Ramadwar
* @file    main.cpp
* @author  Part 1 : Aditi Ramadwar (Driver) , Yash Kulkarni (Navigator)
* @date    10/01/2021
* @version 1.0
*
* @brief   execute all test cases
*
* @section DESCRIPTION
* Runs all test cases defined in test.cpp
*/

// Header files
#include <gtest/gtest.h>

// Run all test cases defined in test.cpp
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
