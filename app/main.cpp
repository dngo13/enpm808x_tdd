// Copyright (C) 2021 by Aditi Ramadwar
#include <iostream>
#include <pid_lib.hpp>

using std :: cout;
using std :: cin;

int main() {
    ControllerPID p(1 ,1, 1);
    double sp = 0, cv = 0;
    cout << "Enter Setpoint and Current velocity";
    cin >> sp >> cv;
    p.computeVelocity(sp, cv);
    return 0;
}
