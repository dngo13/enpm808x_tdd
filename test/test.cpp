/* Copyright PID_test [2021] Version 1.0 
 */


#include <gtest/gtest.h>
#include "pid.hpp"
#include "pid.cpp"

/*
 * @test case pid
 *
 * @brief checks if compute funtion returns 
 *        correct value 
 *         
 */

TEST(pid, should_compute_velocity) {
  PID p(10, 10, 10);
  EXPECT_EQ(1.0, p.compute(2, 3));
}

/*
 * @test case pid
 *
 * @brief asserts if compute function returns 
 *        double velocity.
*/

TEST(pid_function, should_assert_double_velocity) {
  PID p(5.2, 1.1, 1.1);
  ASSERT_DOUBLE_EQ(1.0, p.compute(2, 3));
}

