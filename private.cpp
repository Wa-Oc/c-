#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    // Constructor to initialize data members
    Car(string br, string mo, float pr, int mi) : brand(br), model(mo), price(pr), mileage(mi) {}

    // Member function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Member function to simulate driving and update mileage
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Create Car object with specified details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display car details
    cout << "Car Details:" << endl;
    myCar.display();

    // Simulate driving for 150 miles
    cout << "\nDriving for 150 miles..." << endl;
    myCar.drive(150);

    // Simulate driving for 300 miles
    cout << "\nDriving for 300 miles..." << endl;
    myCar.drive(300);

    return 0;
}