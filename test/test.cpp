#include <gtest/gtest.h>
#include "pid.hpp"
#include "pid.cpp"

/*
 * Copyright PID_test [2021] Version 1.0 
 * @test case pid
 *
 * @brief checks if compute funtion returns 
 *        correct value 
 *         
 */
PID p(1, 1, 1);

TEST(pid, should_compute_velocity) {
  
  EXPECT_EQ(3.0, p.compute(3, 2));
}

/*
 * @test case pid
 *
 * @brief asserts if compute function returns 
 *        double velocity.
*/

TEST(pid_function, should_assert_double_velocity) {
 
  ASSERT_DOUBLE_EQ(3.0, p.compute(3, 2));
}

