#ifndef PARKINGMETER_H
#define PARKINGMETER_H

using namespace std;

// class to represent a parking meter
class ParkingMeter {
private:
    int minutesAllowed; // minutes allowed on the meter
    int minutesParked;  // minutes the car has been parked

public:
    // constructor to initialize the parking meter
    ParkingMeter(int allowed, int parked);

    // get the minutes allowed on the meter
    int getMinutesAllowed() const;

    // get the minutes the car has been parked
    int getMinutesParked() const;

    // calculate the time elapsed
    int timeElapsed() const;
};

#endif 