#ifndef INCLUDE_PID_LIB_HPP_
#define INCLUDE_PID_LIB_HPP_

/**
 * Copyright (C) 2021 by Aditi Ramadwar
 * @file    pid_lib.hpp
 * @author  Part 1 : Aditi Ramadwar (Driver) , Yash Kulkarni (Navigator)
 * @date    9/30/2021
 * @version 1.0
 *
 * @brief   ControllerPID class.
 *
 * @section DESCRIPTION
 * This hpp file defines the class and methods for a PID Controller.
 */

// Header file
#include<iostream>

/**
 * @brief  PID Controller Class, initialization of the gain values
 *
 * @param1 k_p This is the proportional gain constant, user input
 * @param2 k_d This is the derivative gain constant, user input
 * @param3 k_i This is the integral gain constant, user input
 * @param4 sampling_time 
 */
class ControllerPID {
 public:
       double computeVelocity(double set_point, double current_velocity);
       double returnSamplingTime(void);
 private:
        double k_p = 1.2;
        double k_d = 0.2;
        double k_i = 0.4;
        double sampling_time = 1.0;
};

/** 
* @def computeVelocity(double set_point, double current_velocity)
* 
* @brief
* This method computes the new velocity using current and reference velocities as inputs
* This is stub implementation of the method computeVelocity which returns a constant value.
* We need to add the PID computations inside of this method in order for the test cases to pass.
* 
* @param1 set_point         This is the target/desired velocity which needs to be achieved.
*                           This parameter will be taken from the user as input.
* 
* @param2 current_velocity  This is the current/actual velocity.
* 
* @return new_velocity
*/
double ControllerPID::computeVelocity(double set_point,
    double current_velocity) {
    // By default this stub method is returning 2.0.
    double new_velocity = 2.0;
    return new_velocity;
}

/** 
* @def returnSamplingTime(void)
* 
* @brief 
* This method returns the value of sampling_time that is used in the computation
* of new_velocity
* 
* @return sampling_time
*/
double ControllerPID::returnSamplingTime(void) {
    return sampling_time;
}

#endif  // INCLUDE_PID_LIB_HPP_
