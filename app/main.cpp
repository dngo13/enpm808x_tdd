/**
 * Copyright Main [2021] Version 1.0 
 * @file main.cpp
 * @author Part1 1.Diane Ngo (dngo13) (driver) 2.Ameya Konkar (Navigator)
 * @author part2 1.Yash Kulkarni (driver) 2.Aditi Ramadwar (Navigator)
 *
 * @brief Main file
 */

/// Header files ///
#include <iostream>
#include "pid.hpp"

/// Standard Namespace Declaration ///
using std::cout;
using std::endl;

/**
 * @fn int main()
 * @brief Function gives an output of new velocity
 * @return 0
 */

int main() {
    /// Object pid created using PID class ///
    PID pid;
    /// Method setGains called for pid object ///
    pid.setGains(1.0, 1.0, 1.0, 1.0);
    /// Calculation of new_vel for given set point and actual velocity ///
    double new_vel = pid.compute(0.9, 1.5);
    /// print new velocity ///
    cout << "The new velocity is: " << new_vel << endl;
    return 0;
}
