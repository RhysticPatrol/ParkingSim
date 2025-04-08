#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

// constructor to initialize a police officer
PoliceOfficer::PoliceOfficer(const string& name, const string& badgeNumber, const ParkedCar& car, const ParkingMeter& meter)
    : name(name), badgeNumber(badgeNumber), car(car), meter(meter) {}

// inspect the car and issue a ticket if there's a violation
void PoliceOfficer::inspectCar() {
    // calculate the minutes of violation
    int minutesViolation = meter.timeElapsed() - meter.getMinutesAllowed();
    if (minutesViolation > 0) {
        // calculate the parking fee
        double parkingFee = 25.00; // first hour or part thereof.
        int additionalHours = (minutesViolation - 60 + 59) / 60; // calculate additional hours, round up.
        if (additionalHours > 0) {
            parkingFee += additionalHours * 10.00; // $10 per additional hour.
        }
        // create and display a parking ticket
        ParkingTicket ticket(name, badgeNumber, car.getLicenseNumber(), car.getMake(), car.getModel(), car.getColor(), minutesViolation, parkingFee);
        ticket.displayTicket();
    } else {
        cout << "No violation detected.\n";
    }
}