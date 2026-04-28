#ifndef _4_VEHICLE_H
#define _4_VEHICLE_H

#include <iostream>
#include <string>


class Vehicle {
private:
    int m_count_of_passenger_seats, m_max_speed, m_fuel_consumption, m_cost_of_vehicle;
    std::string m_name_of_vehicle;

public:
    bool setCountOfPassengerSeats(int count);
    bool setMaxSpeed(int max_speed);
    bool setFuelConsumption(int fuel_consumption);
    bool setCostVehicle(int cost);
    bool setName(std::string name_of_vehicle);

    virtual void StartEngine();

public:
    void CreateVehicle();
};

class Car : public Vehicle {
public:
    Car();
    void StartEngine() override;
};

class ElectricCar : public Car {
private:
    int m_battery_capacity;
public:
    ElectricCar();
    void StartEngine() override;
};

class Plane : public Vehicle {
public:
    Plane();
    void StartEngine() override;
};

class Truck : public Vehicle {
private:
    int m_load_capacity;
public:
    Truck();
    void StartEngine() override;
};

#endif //_4_VEHICLE_H