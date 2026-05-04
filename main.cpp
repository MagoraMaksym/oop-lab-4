#include <iostream>
#include "vehicle.h"

int main() {

    std::cout << "\n1. Створюємо Car:";
    Vehicle* v1 = new Car();
    v1->StartEngine();
    delete v1; 

    std::cout << "\n\n2. Створюємо ElectricCar:";
    Vehicle* v2 = new ElectricCar();
    v2->StartEngine();
    delete v2; 
    

    std::cout << "\n\n3. Створюємо Truck:";
    Vehicle* v3 = new Truck();
    v3->StartEngine();
    delete v3; 


    return 0;
}
