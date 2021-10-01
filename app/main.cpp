/*
 * Copyright Main [2021] Version 1.0 
 * @file main.cpp
 * @author Diane Ngo (dngo13)
 *
 * @brief Main file
 */
#include <iostream>
#include "pid.hpp"

using std::cout;
using std::endl;

int main() {
    PID pid;
    pid.setGains(1.0, 1.0, 1.0);
    double new_vel = pid.compute(0.9, 1.5);
    cout << "The new velocity is: " << new_vel << endl;
    return 0;
}
