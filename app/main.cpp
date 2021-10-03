// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>

using std :: cout;
using std :: cin;
using std :: endl;

int main() {
    double pid_var[3] = {0};                  
    cout << "Enter PID values" << endl;
    cin >> pid_var[0];                   // Enter kp value 
    cin >> pid_var[1];                   // Enter ki value
    cin >> pid_var[2];                   // Enter kd value
    ControllerPID p(pid_var[0] ,pid_var[1], pid_var[2]); 
    double sp = 0, cv = 0;
    cout << "Enter Setpoint and Current velocity";
    cin >> sp >> cv;
    p.computeVelocity(sp, cv);
    return 0;
}
