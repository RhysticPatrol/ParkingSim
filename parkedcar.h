#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

using namespace std;

class ParkedCar {
private:
    string licenseNumber;
    string make;
    string model;
    string color;

public:
    ParkedCar(const string& license, const string& make, const string& model, const string& color);

    string getLicenseNumber() const;
    string getMake() const;
    string getModel() const;
    string getColor() const;
};

#endif