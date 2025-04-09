#include "PoliceOfficer.h"
#include <iostream>

using namespace std; 

// constructor for the PoliceOfficer class
PoliceOfficer::PoliceOfficer(const string& name,
                                const string& badgeNumber,
                                const ParkedCar& car,
                                const ParkingMeter& meter)
    : name(name), // initialize name
      badgeNumber(badgeNumber), // initialize badgeNumber
      car(car), // initialize car
      meter(meter) {} // initialize meter

// inspect the car and give ticket if necessary
void PoliceOfficer::inspectCar() {
    // calculate the number of minutes the car has been parked over the allowed time
    int minutesViolation = meter.getParkedMinutes() - meter.getAllowedMinutes();

    // check if there is a parking violation
    if (minutesViolation > 0) {
        // calculate the parking fee
        double parkingFee = calculateFine(minutesViolation);

        // create a ParkingTicket object
        ParkingTicket ticket(name, badgeNumber, car.getLicenseNumber(), car.getMake(), car.getModel(), car.getColor(), minutesViolation, meter.getAllowedMinutes(), parkingFee);

        // display the parking ticket details
        ticket.displayTicket();
    } else {
        // print no violation detected
        cout << "No violation detected.\n";
    }
}

// calculate the parking fine based on the number of overdue minutes
double PoliceOfficer::calculateFine(int minutesOver) const {
    const double baseFine = 25.0; // base fine for the first hour
    const double hourlyFine = 10.0; // hourly fine for additional hours

    // if the violation is within the first hour then return the base fine
    if (minutesOver <= 60) {
        return baseFine;
    }

    // calculate the number of hours
    int additionalHours = (minutesOver - 60 + 59) / 60;

    // calculate the total fine
    return baseFine + (additionalHours * hourlyFine);
}