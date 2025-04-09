#include "ParkedCar.h"
using namespace std;

// constructor for ParkedCar class
// this sets up the car with its license, make, model, and color
ParkedCar::ParkedCar(const string& license, const string& make, const string& model, const string& color)
                     : licenseNumber(license), make(make), model(model), color(color) {}

// get the license number of the car
string ParkedCar::getLicenseNumber() const {
    return licenseNumber; // return the license number
}

// get the make of the car
string ParkedCar::getMake() const {
    return make; // return the make of the car
}

// get the model of the car
string ParkedCar::getModel() const {
    return model; // return the model of the car
}

// get the color of the car
string ParkedCar::getColor() const {
    return color; // return the color of the car
}
