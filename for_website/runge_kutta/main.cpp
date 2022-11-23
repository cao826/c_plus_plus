#include <iostream>
#include <cmath>

using namespace std;

double computeK1(double (*func) (double, double), double initValue, double initTime) {
    return func(initValue, initTime);
}

double computeK2(double (*func) (double, double), double initValue, double initTime, double h, double k1) {
    return func( initValue + k1 + ( h / 2.0), initTime + (h/2.0));
}

double computeK3(double (*func) (double, double), double initValue, double initTime, double h, double k2) {
    return func( initValue + k2 + ( h / 2.0), initTime + (h/2.0));
}

double computeK4(double (*func) (double, double), double initValue, double initTime, double h, double k3) {
    return func( initValue + k3 + ( h / 2.0), initTime + h);
}


double computeDelta(double (*func) (double, double), double k1, double k2, double k3, double k4, double initValue, double h) {
    return initValue + ((k1 + (2 * k2) + (2 * k3) + k4) * h/6.0);
}

double stepThroughRungeKutta(double (*func), double initValue, double initTime, double h) {
    double k1 = computeK1(func, initValue, initTime);
    double k2 = computeK2(func, initValue, initTime, h, k1);
    double k3 = computeK3(func, initValue, initTime, h, k2);
    double k4 = computeK4(func, initValue, initTime, h, k3);
    double newStep = computeDelta(func, k1, k2, k3, k4, initValue, h);
    return newStep
}

int main()
{
    return 0;
}

