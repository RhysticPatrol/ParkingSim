#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

class ParkedCar {
private:
    std::string licenseNumber;
    std::string make;
    std::string model;
    std::string color;

public:
    ParkedCar(const std::string& license, const std::string& make, const std::string& model, const std::string& color);

    std::string getLicenseNumber() const;
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
};

#endif 