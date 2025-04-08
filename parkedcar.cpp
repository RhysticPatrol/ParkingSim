#include "ParkedCar.h"
using namespace std;

ParkedCar::ParkedCar(const string& license, const string& make, const string& model, const string& color)
    : licenseNumber(license), make(make), model(model), color(color) {}

string ParkedCar::getLicenseNumber() const {
    return licenseNumber;
}

string ParkedCar::getMake() const {
    return make;
}

string ParkedCar::getModel() const {
    return model;
}

string ParkedCar::getColor() const {
    return color;
}
