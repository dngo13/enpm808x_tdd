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

