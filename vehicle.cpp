#include "vehicle.h"


bool Vehicle::setCountOfPassengerSeats(int count)
{
    if (count < 0)
    {
        return false;
    }

    m_count_of_passenger_seats = count;
    return true;
}




bool Vehicle::setMaxSpeed(int max_speed)
{
    if (max_speed < 0)
    {
        return false;
    }

    m_max_speed = max_speed;
    return true;
}

bool Vehicle::setFuelConsumption(int fuel_consumption)
{
    if (fuel_consumption < 0)
    {
        return false;
    }

    m_fuel_consumption = fuel_consumption;
    return true;
}




bool Vehicle::setCostVehicle(int cost)
{
    if (cost < 0)
    {
        return false;
    }

    m_cost_of_vehicle = cost;
    return true;
}

bool Vehicle::setName(std::string name_of_vehicle)
{
    m_name_of_vehicle = name_of_vehicle;
    return true;
}

void Vehicle::StartEngine()
{
    std::cout << "Транспорт видає невизначений звук двигуна";
}

void Vehicle::CreateVehicle()
{
    std::cout << "\nКількість пасажирів:  " << m_count_of_passenger_seats << "\nМаксимальна швидкість: " << m_max_speed << "\nВитрати палива: " << m_fuel_consumption << " л/100км" << "\nВартість: " << m_cost_of_vehicle << "  $";
}

Car::Car()
{
    setName("Звичайна машина");
    setCountOfPassengerSeats(5);
    setMaxSpeed(220);
    setFuelConsumption(8);
    setCostVehicle(20000);
}



void Car::StartEngine()
{
    std::cout << " Двигун машини заведено";
}

ElectricCar::ElectricCar()
{
    setName("Електромобіль");
    setFuelConsumption(0);
    m_battery_capacity = 80;
}

void ElectricCar::StartEngine()
{
    std::cout << "\nЕлектромобіль готовий до їзди";
}

Plane::Plane()
{
    setName("Пасажирський літак");
    setCountOfPassengerSeats(150);
    setMaxSpeed(900);
    setFuelConsumption(2500);
    setCostVehicle(50000000);
}

void Plane::StartEngine()
{
    std::cout << "\nРеактивні двигуни прогріваються";
}

Truck::Truck()
{
    setName("Вантажівка MAN");
    setCountOfPassengerSeats(2);
    setMaxSpeed(110);
    setFuelConsumption(35);
    setCostVehicle(85000);
    m_load_capacity = 20000;

}




void Truck::StartEngine()
{
    std::cout << "\nДизельний двигун вантажівки запрацював";
}


Vehicle::~Vehicle()
{
    std::cout << "\nVehicle Об'єкт базового класу знищено";
}

Car::~Car()
{
    std::cout << "\nCar Машину видалено";
}

ElectricCar::~ElectricCar()
{
    std::cout << "\nElectricCar Електромобіль та акумулятори видалено";
}

Plane::~Plane()
{
    std::cout << "\nPlane Літак видалено";
}

Truck::~Truck()
{
    std::cout << "\nTruck Вантажівку видалено";
}
