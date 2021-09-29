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
	double kp; /* Proportional gain */
	double ki; /* Integral gain */
	double kd; /* Derivative gain */

public:
	/**
	 * @brief PID Constructor
	 */
	PID();
	PID(const double &kp, const double &ki, const double &kd);

	/**
	 * @brief PID Destructor
	 */
	~PID();

	/*
	 * @brief Calulate new velocity given a setpoint and actual velocity
	 */
	double compute();
};
