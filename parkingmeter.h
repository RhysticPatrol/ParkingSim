#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int allowedMinutes;
    int parkedMinutes;

public:
    ParkingMeter(int allowed, int parked);

    int getAllowedMinutes() const;
    int getParkedMinutes() const;

    bool isExpired() const;
    int getOverdueMinutes() const;
};

#endif