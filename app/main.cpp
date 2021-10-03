// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>
using std :: cout;
using std :: cin;
int main() {
    double pid_var[3] = {0}, sp = 0, cv = 0;                  
    cout << "Enter PID values, setpoint and current velocity";
    cin >> pid_var[0] >> pid_var[1] >> pid_var[2] >> sp >> cv ;         // Enter kd, ki, kd values
    ControllerPID p(pid_var[0] ,pid_var[1], pid_var[2]);                // Create instance for ControllerPID class
    cout << p.computeVelocity(sp, cv);
    return 0;
}
