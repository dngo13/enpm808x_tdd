// #ifndef INCLUDE_PID_LIB_HPP_
// #define INCLUDE_PID_LIB_HPP_

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
#pragma once
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
    /**
     * @brief Construct a new PID object
     */
    ControllerPID(double k_p_, double k_i_, double k_d_) {
        // Initialize K_p, K_i, k_d
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

 private:
        // Initializing the gain values, sampling time and PID errors
        double k_p;
        double k_d;
        double k_i;
        double sampling_time;
        double prev_error;
        double cur_error;
        double new_velocity;
        double total_D_error;
        double total_I_error;
};
// #endif  // INCLUDE_PID_LIB_HPP_
