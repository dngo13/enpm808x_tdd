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
    // By default this stub method is returning 2.0.
    return 2.0;
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

