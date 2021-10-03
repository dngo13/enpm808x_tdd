// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>

using std :: cout;
using std :: cin;

int main() {
    double PID[3] = {0};
    cout << "Enter PID values" << endl;
    cin >> PID[0] >> PID[1] >> PID[2];
    ControllerPID p(PID[0] ,PID[1], PID[2]);
    double sp = 0, cv = 0;
    cout << "Enter Setpoint and Current velocity";
    cin >> sp >> cv;
    p.computeVelocity(sp, cv);
    return 0;
}
