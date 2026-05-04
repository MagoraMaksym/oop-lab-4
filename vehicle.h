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

    virtual ~Vehicle();
    virtual void StartEngine();
    void CreateVehicle();
};

class Car : public Vehicle {
public:
    Car();
    virtual ~Car() override; 
    void StartEngine() override;
};

class ElectricCar : public Car {
private:
    int m_battery_capacity;
public:
    ElectricCar();
    virtual ~ElectricCar() override; 
    void StartEngine() override;
};

class Plane : public Vehicle {
public:
    Plane();
    virtual ~Plane() override; 
    void StartEngine() override;
};

class Truck : public Vehicle {
private:
    int m_load_capacity;
public:
    Truck();
    virtual ~Truck() override; 
    void StartEngine() override;
};

#endif //_4_VEHICLE_Hі
