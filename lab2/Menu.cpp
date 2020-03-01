//
// Created by Анна on 26.02.2020.
//

#include <iostream>
#include "Menu.h"
#include "VectorR3.h"

Menu::Menu() {
    number = 0;
}

void Menu::MenuCase(Menu& menu, int number) {
    if (number == 0) {
        ShowMenu(menu);
    }
    else if (number == 1) {
        std::cout << "Enter first vector (a) coordinates (example: 2.0, 1.0, 3.0): " << std::endl;
        double x, y, z;
        std::cin >> x >> y >> z;
        VectorR3 a(x, y, z);
        std::cout << "Enter second vector (b) coordinates (example: 2.5, 6.0, 1.0): " << std::endl;
        std::cin >> x >> y >> z;
        VectorR3 b(x, y, z);
        VectorR3 c = VectorR3::VectorPlus(a, b);
        std::cout << "Result vector (c) coordinates: ";
        std::cout << c << std::endl;
        ShowMenu(menu);
    }
    else if (number == 2) {
        std::cout << "Enter first vector (a) coordinates (example: 2.0, 1.0, 3.0): " << std::endl;
        double x, y, z;
        std::cin >> x >> y >> z;
        VectorR3 a(x, y, z);
        std::cout << "Enter second vector (b) coordinates (example: 2.5, 6.0, 1.0): " << std::endl;
        std::cin >> x >> y >> z;
        VectorR3 b(x, y, z);
        VectorR3 c = VectorR3::VectorMinus(a, b);
        std::cout << "Result vector (c) coordinates: ";
        std::cout << c << std::endl;
        ShowMenu(menu);
    }
    else if (number == 3) {
        std::cout << "Enter vector coordinates (example: 2.0, 1.0, 3.0): " << std::endl;
        double x, y, z;
        std::cin >> x >> y >> z;
        VectorR3 a(x, y, z);
        std::cout << "Length of vector: " << VectorR3::VectorLength(a) << std::endl;
        ShowMenu(menu);
    }
    else if (number == 4) {
        std::cout << "Enter first vector (a) coordinates (example: 2.0, 1.0, 3.0): " << std::endl;
        double x, y, z;
        std::cin >> x >> y >> z;
        VectorR3 a(x, y, z);
        std::cout << "Enter second vector (b) coordinates (example: 2.5, 6.0, 1.0): " << std::endl;
        std::cin >> x >> y >> z;
        VectorR3 b(x, y, z);
        std::cout << "Angle between vector (a) and (b) is " << VectorR3::VectorsAngle(a, b) << std::endl;
        ShowMenu(menu);
    }
    else if (number == 5) {
        std::cout << "Enter vector (a) coordinates (example: 2.0, 1.0, 3.0): " << std::endl;
        double x, y, z;
        std::cin >> x >> y >> z;
        VectorR3 a(x, y, z);
        std::cout << "Your vector is: " << std::endl;
        std::cout << a << std::endl;
        ShowMenu(menu);
    }
    else if (number == 6) {
        std::cout << "Exiting program..." << std::endl;
        exit(0);
    }
    else {
        std::cout << "Enter a valid number from Menu list please." << std::endl;
        ShowMenu(menu);
    }
}

void Menu::ShowMenu(Menu& menu) {
    std::cout << "Enter the number to choose an action: " << std::endl;
    std::cout << "1. Vector addition." << std::endl;
    std::cout << "2. Subtraction of vectors." << std::endl;
    std::cout << "3. Calculate the length of vector." << std::endl;
    std::cout << "4. Calculate the angle between two vectors." << std::endl;
    std::cout << "5. Show vector coordinates." << std::endl;
    std::cout << "6. Exit program." << std::endl;
    std::cout << "0 - Show Menu" << std::endl;
    std::cin >> menu.number;
    MenuCase(menu, menu.number);
}
