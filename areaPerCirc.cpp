// Copyright (c) 2025 Amara Tie All rights reserved.

//

// Created by: Amara Tie

// Date: March 4, 2025

// Calculating the Area and Perimeter
#include <iostream>
#include<cmath>

int main() {
   
    // declare variables
    float radius, circumference, area;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the area and perimeter 
    circumference = M_PI * radius;
    area = M_PI * pow(radius, 2);

    // display the circumferance to the user
    std::cout<< " ";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
    std::cout << "Area = " << area << " mm^2" << std::endl;
}