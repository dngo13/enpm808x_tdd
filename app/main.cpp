// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>
using std :: cout;
using std :: cin;

/**
 * @def     main.cpp(void)
 * @brief   Create an instance PID object with initial and target velocities.
 * call the method computeVelocity of ControllerPID class and print the value
 * of new velocity.
 *  
 * @param1 pid_var[3] Contains the values of the three gains
 * @param2 sp set target velocity variable
 * @param3 cv current velocity variable
 * 
 * @return int 
 */
int main() {
    // Initialize local pid gain variables
    double pid_var[3] = {0}, sp = 0, cv = 0;
    cout << "Enter PID values(Kp, Ki, Kd), setpoint and current velocity : " << "\n";
    // Take user input for kd, ki, kd values, target and current velocity
    cin >> pid_var[0] >> pid_var[1] >> pid_var[2] >> sp >> cv;
    // Create instance for ControllerPID class
    ControllerPID p(pid_var[0], pid_var[1], pid_var[2]);
    // Print the new velocity
    cout << "New Velocity: " << p.computeVelocity(sp, cv) << "\n";
    return 0;
}
