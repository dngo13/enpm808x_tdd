#ifndef PID_HPP
#define PID_HPP

/**
 * Copyright PID_Class [2021] Version 1.0 
 * @file pid.hpp
 * @author Part1 1.Diane Ngo (dngo13) (driver) 2.Ameya Konkar (Navigator)
 * @author part2 1.Yash Kulkarni (driver) 2.Aditi Ramadwar (Navigator)
 * @brief PID Controller Header File
 *
 * @section DESCRIPTION
 * This file contains the function compute which returns the value
 * of new velocity.
 * Header file to define the PID Class
 */

#pragma once

/// Header File ///
#include<iostream>

/// Standard namespace declaration ///
using std::cout;
using std::endl;

/**
 * @class PID
 * @brief Initialization of gain values and declaration of
 * methods
 * @param1 kp_ proportinal gain
 * @param2 ki_ integral gain
 * @param3 kd_ derevative gain
 * @param4 ts_ sampling time
 * @param5 tar_setpnt target set point
 * @param6 act_vel actual velocity
 * @param7 new_vel new velocity
 */

class PID {
 public:
  /**
   * @brief PID Constructor
   */

  PID(double kp, double ki, double kd, double ts);

  /**
   * @brief PID Destructor
   */
  ~PID();

  /**
   * @brief Set the gains for the PID controller
   */
  int setGains(double kp, double ki, double kd, double ts);

  /**
   * @brief Calulate new velocity given a setpoint and actual velocity
   */
  double compute(double tar_setpnt, double act_vel);

 private:
  double kp_ = 0.0; /* Proportional gain */
  double ki_ = 0.0; /* Integral gain */
  double kd_ = 0.0; /* Derivative gain */
  double ts_ = 0.0; /* Sampling time */
  double tar_setpnt = 0.0; /* Target setpoint */
  double act_vel = 0.0; /* Actual velocity */
  double new_vel = 0.0; /* New velocity */
};

#endif  /// PID_HPP ///

