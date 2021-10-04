// Copyright (C) 2021 by Aditi Ramadwar
/**
* @file    pid.cpp
* @author  Part 1 : Aditi Ramadwar (Driver) , Yash Kulkarni (Navigator)
* @date    10/03/2021
* @version 1.0
*
* @brief   PID methods descriptions
*
* @section DESCRIPTION
*
* This is a file that contains all the methods for ControllerPID class
*/

#include "pid_lib.hpp"

// Construct a new PID object
ControllerPID::ControllerPID(double k_p_, double k_i_, double k_d_) {
        // Initialize K_p, K_i, k_d, sampling time and errors
        k_p = k_p_;
        k_i = k_i_;
        k_d = k_d_;
        sampling_time = 1.0;
        cur_error = 0;
        prev_error = 0;
        new_velocity = 0;
        total_D_error = 0;
        total_I_error = 0;
    }

/** 
* @def computeVelocity(double set_point, double current_velocity)
* 
* @brief
* This method computes the new velocity using current and reference velocities as inputs
* This is stub implementation of the method computeVelocity which returns a constant value.
* To do by part 2: 
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
    cur_error = (set_point - current_velocity);
    total_I_error = total_I_error + cur_error*sampling_time;
    total_D_error = (cur_error - prev_error)/sampling_time;
    new_velocity = k_p*cur_error +  k_i*total_I_error + k_d*total_D_error;
    prev_error = cur_error;
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
