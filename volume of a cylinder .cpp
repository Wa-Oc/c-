/*
Author:Walter  Ongoye 
Reg No:BBIT-05-0124/2016
Description:c++ program  to calculate the volume of a cylinder 
*/
#include <iostream>
#include <cmath>  // for M_PI constant

class Cylinder {
private:
    double radius;
    double height;

public:
    // Constructor to initialize radius and height
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Member function to calculate volume
    double volume() {
        return M_PI * std::pow(radius, 2) * height;
    }

    // Member function to calculate surface area
    double surfaceArea() {
        return 2 * M_PI * radius * (radius + height);
    }
};

int main() {
    double r, h;

    std::cout << "Enter radius: ";
    std::cin >> r;
    std::cout << "Enter height: ";
    std::cin >> h;

    Cylinder cylinder(r, h);

    std::cout << "Volume of the cylinder: " << cylinder.volume() << std::endl;
    std::cout << "Surface area of the cylinder: " << cylinder.surfaceArea() << std::endl;

    return 0;
}



    