#ifndef WASHER_H
#define WASHER_H

#include <iostream>
#include <string>

class Washer {
private:
    std::string brand;
    std::string color;
    double width;
    double height;
    double depth;
    int power;
    int spinSpeed;
    int heatTemperature;

public:
    Washer(std::string brand, std::string color, double width, double height, double depth,
        int power, int spinSpeed, int heatTemperature)
        : brand(brand), color(color), width(width), height(height), depth(depth),
        power(power), spinSpeed(spinSpeed), heatTemperature(heatTemperature) {
    }

    void displayInfo() const {
        std::cout << "Washer Info:\n"
            << "Brand: " << brand << "\n"
            << "Color: " << color << "\n"
            << "Dimensions: " << width << "x" << height << "x" << depth << " cm\n"
            << "Power: " << power << " W\n"
            << "Max Spin Speed: " << spinSpeed << " RPM\n"
            << "Max Heating Temperature: " << heatTemperature << "°C\n";
    }

    void startWashCycle(int temperature, int spin) {
        if (temperature > heatTemperature) {
            std::cout << "Error: Temperature exceeds max limit!\n";
        }
        else if (spin > spinSpeed) {
            std::cout << "Error: Spin speed exceeds max limit!\n";
        }
        else {
            std::cout << "Washing started at " << temperature << "°C and "
                << spin << " RPM spin speed.\n";
        }
    }
};

#endif // WASHER_H
