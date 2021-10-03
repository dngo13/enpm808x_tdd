// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>

int main() {
    /**
     * To-do in Part 2
     * Take input for the three gain values, desired velocity and current velocity
     * 
     * Call the compute method and print the new velocity value
     * */
    ControllerPID p(1 ,1, 1);
    double sp = 0, cv = 0;
    cout << "Enter Setpoint and Current velocity";
    cin >> sp >> cv;
    p.computeVelocity(sp, cv);
    return 0;
}
