/*
 * @file pid.cpp
 * @author Diane Ngo (dngo13)
 *
 * @brief PID Class Source file
 *
 * @section DESCRIPTION
 *
 * This source file contains the implementation of the PID controller.
 */

#include <iostream>
#include <pid.hpp>

using std::cout;
using std::endl;
/**
 * Constructor and Destructor
 */
PID::PID(){}

PID::PID(double kp, double ki, double kd) {
	setGains(kp, ki, kd);
}

PID::~PID() {

}

/*
 * @brief Function to set the gains for PID controller
 */
void PID::setGains(double kp, double ki, double kd) {
	kp_ = kp;
	ki_ = ki;
	kd_ = kd;
}

/*
 * @brief Calculate target velocity using setpoint and actual velocity
 */
double PID::compute(double tar_setpnt, double act_vel) {
	cout << "Target setpoint: " << tar_setpnt << " and actual velocity: " << act_vel << endl;
	new_vel = 1.0;
	return new_vel;
}
