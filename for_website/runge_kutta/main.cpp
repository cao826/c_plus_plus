#include <iostream>
#include <cmath>

using namespace std;

double exampleFunction(double initValue, double initTime) {
    return (-2.0 * initValue);
}

double computeK1(double initValue, double initTime) {
    return exampleFunction(initValue, initTime);
}

double computeK2(double initValue, double initTime, double h, double k1) {
    return exampleFunction( initValue + k1 + ( h / 2.0), initTime + (h/2.0));
}

double computeK3(double initValue, double initTime, double h, double k2) {
    return exampleFunction( initValue + k2 + ( h / 2.0), initTime + (h/2.0));
}

double computeK4(double initValue, double initTime, double h, double k3) {
    return exampleFunction( initValue + k3 + ( h / 2.0), initTime + h);
}


double computeDelta(double k1, double k2, double k3, double k4, double initValue, double h) {
    return initValue + ((k1 + (2 * k2) + (2 * k3) + k4) * h/6.0);
}

double stepThroughRungeKutta(double initValue, double initTime, double h) {
    double k1 = computeK1(initValue, initTime);
    double k2 = computeK2(initValue, initTime, h, k1);
    double k3 = computeK3(initValue, initTime, h, k2);
    double k4 = computeK4(initValue, initTime, h, k3);
    double newStep = computeDelta( k1, k2, k3, k4, initValue, h);
    cout << newStep << endl;
    return newStep;
}

int main()
{
    double timepoints[40] = {0.0, 0.05, 0.1, 0.15, 0.2, 0.3, 0.35, 0.4, 0.45,
                             0.5, 0.55, 0.60, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9,
                             0.95, 1.0, 1.05, 1.1, 1.15, 1.2, 1.25, 1.3, 1.35,
                             1.4, 1.45, 1.5, 1.55, 1.60, 1.65, 1.7, 1.75, 1.8,
                             1.85, 1.9, 1.95, 2.0};
    double initialValue = 3.0;
    double h = 0.05;
    double solutions[40];
    solutions[0] = initialValue;

    for (int i = 1; i < 40; i++) {
        cout << i << endl;
        solutions[i] = stepThroughRungeKutta(solutions[i-1], timepoints[i-1], h);
    }

    for (int i = 0; i<40; i++) {
        cout << solutions[i] << ",";
    }
    return 0;
}

