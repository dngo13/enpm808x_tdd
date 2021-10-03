/**
 * Copyright pid_cpp [2021] Version 1.0
 * @file pid.cpp
 * @author Part1 1.Diane Ngo (dngo13) (driver) 2.Ameya Konkar (Navigator)
 * @author part2 1.Yash Kulkarni (driver) 2.Aditi Ramadwar (Navigator)
 *
 * @brief PID Class Source file
 *
 * @section DESCRIPTION
 *
 * This source file contains the implementation of the PID controller.
 */

/// Header files ///
#include <iostream>
#include <pid.hpp>

/// Standard Namespace Declaration ///
using std::cout;
using std::endl;

/**
 * @brief Constructor and Destructor
 */


PID::PID(double kp, double ki, double kd, double ts) {
  setGains(kp, ki, kd, ts);
}



/**
 * @brief Function to set the gains for PID controller
 */

int PID::setGains(double kp, double ki, double kd, double ts) {
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
    ts_ = ts;
    return 0;
}

   /**
   * @brief Calulate new velocity given a setpoint and actual velocity
   * @param1 tar_setpnt Desired Velocity
   * @param2 act_vel Actual Velocity
   * @return new_vel
   */

double PID::compute(double tar_setpnt, double act_vel) {
     cout << "Target setpoint: " << tar_setpnt;
     cout << " and actual velocity: " << act_vel << endl;
     /// declaration of variable current error ///
     /// Calculate the current error ///
     double current_error = tar_setpnt - act_vel;
     /// Calculation of proportional component ///
     double proportional = kp_ * current_error;
     /// Calculation of Integral component ///
     double integral = ki_ * (current_error * ts_);
     /// Calculation of Derivative component ///
     double derivative = kd_ * (current_error /ts_);
     /// Calculation of New velocity ///
     new_vel = proportional + integral + derivative;
     /// Returns the value of velocity ///
     return new_vel;
  }

PID::~PID() {}


