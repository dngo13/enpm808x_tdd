/**
 * Copyright test_cpp [2021] Version 1.0
 * @file test.cpp
 * @author Part1 1.Diane Ngo (dngo13) (driver) 2.Ameya Konkar (Navigator)
 * @author part2 1.Yash Kulkarni (driver) 2.Aditi Ramadwar (Navigator)
 *
 * @brief Test case file
 *
 * @section DESCRIPTION
 *
 * This source file contains the implementation of test for  the PID controller.
 */

/// Header files ///
#include <gtest/gtest.h>
#include "pid.hpp"


///  Setting parameters for PID ///
PID p(1.0, 1.0, 1.0, 1.0);

/**
 * @test case pid
 *
 * @brief checks if compute funtion returns 
 *        correct value 
 */

TEST(pid, should_compute_velocity) {
  EXPECT_EQ(3.0, p.compute(3, 2));
}

/**
 * @test case pid
 *
 * @brief asserts if compute function returns 
 *        double velocity.
*/

TEST(pid_function, should_assert_double_velocity) {
  ASSERT_DOUBLE_EQ(3.0, p.compute(3, 2));
}

