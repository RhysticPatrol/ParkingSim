#include "PoliceOfficer.h"
#include <iostream>

using namespace std; 

// Constructor for the PoliceOfficer class
PoliceOfficer::PoliceOfficer(const string& name,
                                const string& badgeNumber,
                                const ParkedCar& car,
                                const ParkingMeter& meter)
    : name(name), // Initialize name member
      badgeNumber(badgeNumber), // Initialize badgeNumber member
      car(car), // Initialize car member
      meter(meter) {} // Initialize meter member

// Inspect the car and issue a ticket if necessary
void PoliceOfficer::inspectCar() {
    // Calculate the number of minutes the car has been parked over the allowed time
    int minutesViolation = meter.getParkedMinutes() - meter.getAllowedMinutes();

    // Check if there is a parking violation
    if (minutesViolation > 0) {
        // Calculate the parking fee
        double parkingFee = calculateFine(minutesViolation);

        // Create a ParkingTicket object
        ParkingTicket ticket(name, badgeNumber, car.getLicenseNumber(), car.getMake(), car.getModel(), car.getColor(), minutesViolation, meter.getAllowedMinutes(), parkingFee);

        // Display the parking ticket details
        ticket.displayTicket();
    } else {
        // No violation detected, print a message
        cout << "No violation detected.\n";
    }
}

// Calculate the parking fine based on the number of overdue minutes
double PoliceOfficer::calculateFine(int minutesOver) const {
    const double baseFine = 25.0; // Base fine for the first hour
    const double hourlyFine = 10.0; // Hourly fine for additional hours

    // If the violation is within the first hour, return the base fine
    if (minutesOver <= 60) {
        return baseFine;
    }

    // Calculate the number of additional hours (rounding up)
    int additionalHours = (minutesOver - 60 + 59) / 60;

    // Calculate the total fine
    return baseFine + (additionalHours * hourlyFine);
}