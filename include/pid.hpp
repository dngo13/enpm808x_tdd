/**
 * @file pid.hpp
 * @author Diane Ngo (dngo13)
 *
 * @brief PID Controller Header File
 *
 * @section DESCRIPTION
 *
 * Header file to define the PID Class
 */

#pragma once
#include<iostream>

class PID {
private:
	double kp_; /* Proportional gain */
	double ki_; /* Integral gain */
	double kd_; /* Derivative gain */
	double tar_setpnt; /* Target setpoint */
	double act_vel; /* Actual velocity */
	double new_vel; /* New velocity */

public:
	/**
	 * @brief PID Constructor
	 */
	PID();
	PID(double kp, double ki, double kd);

	/**
	 * @brief PID Destructor
	 */
	~PID();

	/*
	 * @brief Set the gains for the PID controller
	 */
	void setGains(double kp, double ki, double kd);

	/*
	 * @brief Calulate new velocity given a setpoint and actual velocity
	 */
	double compute(double tar_setpnt, double act_vel);
};
