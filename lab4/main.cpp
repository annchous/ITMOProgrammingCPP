#include <iostream>
#include "Interfaces.h"
#include "Segment.h"
#include "Hexagon.h"
#include <vector>
#include <algorithm>

int Commands() {
    int num = 0;
    std::cout << "Choose the command from the command list: " << std::endl;
    std::cout << "1. Get square of the figure." << std::endl;
    std::cout << "2. Get perimeter of the figure." << std::endl;
    std::cout << "3. Get mass of the figure." << std::endl;
    std::cout << "4. Get position of the figure." << std::endl;
    std::cout << "5. If this object equals with another by mass." << std::endl;
    std::cout << "6. If this object is smaller than another by mass." << std::endl;
    std::cout << "7. Draw this object." << std::endl;
    std::cout << "8. Get classname of this object." << std::endl;
    std::cout << "9. Get size of this object." << std::endl;
    std::cout << "10. Show all figures." << std::endl;
    std::cout << "11. Get sum of squares." << std::endl;
    std::cout << "12. Get sum of perimeters." << std::endl;
    std::cout << "13. Get the mass center of the system." << std::endl;
    std::cout << "14. Get the sum of memory." << std::endl;
    std::cout << "15. Sort objects by mass and show their mass." << std::endl;
    std::cout << "16. Exit program." << std::endl;
    std::cout << "0. Continue..." << std::endl;
    std::cin >> num;
    std::cout << std::endl;
    return num;
}

int main() {
    std::vector<IFigureUnion*> figures;
    std::string figureType;
    int i = 0;
    int comNum = 0;
    while (true) {
        std::cout << "Enter the type of the figure you want to add or press 0 to stop adding: " << std::endl;
        std::cin >> figureType;
        std::for_each(figureType.begin(), figureType.end(), [](char& c){
            c = ::tolower(c);
        });
        if (figureType == "segment") {
            figures.push_back(new Segment());
        }
        else if (figureType == "hexagon") {
            figures.push_back(new Hexagon);
        }
        else if (figureType == "0") {
            break;
        }
        else {
            std::cout << "Enter valid type of figure (segment or hexagon)!" << std::endl;
            std::cin >> figureType;
        }
        figures[i]->initFromDialog();
        i++;
    }
    comNum = Commands();
    while (true) {
        if (comNum == 1) {
            std::cout << "Square of this " << figures[i]->classname() << " = " << figures[i]->square() << std::endl;
            comNum = Commands();
        }
        else if (comNum == 2) {
            std::cout << "Perimeter of this " << figures[i]->classname() << " = " << figures[i]->perimeter() << std::endl;
            comNum = Commands();
        }
        else if (comNum == 3) {
            std::cout << "Mass of this " << figures[i]->classname() << " = " << figures[i]->mass() << std::endl;
            comNum = Commands();
        }
        else if (comNum == 4) {
            std::cout << "Position of this " << figures[i]->classname() << " = {" << figures[i]->position().x << ", " << figures[i]->position().y << "}" << std::endl;
            comNum = Commands();
        }
        else if (comNum == 5) {
            std::cout << "Enter the index of another object: " << std::endl;
            int j = 0;
            std::cin >> j;
            if (figures[i] == figures[j]) {
                std::cout << "These objects are equal by mass." << std::endl;
            }
            else {
                std::cout << "These objects are not equal by mass." << std::endl;
            }
            comNum = Commands();
        }
        else if (comNum == 6) {
            std::cout << "Enter the index of another object: " << std::endl;
            int j = 0;
            std::cin >> j;
            if (figures[i] < figures[j]) {
                std::cout << "This object is smaller than another by mass." << std::endl;
            }
            else {
                std::cout << "This object is bigger than another by mass." << std::endl;
            }
            comNum = Commands();
        }
        else if (comNum == 7) {
            figures[i]->draw();
            comNum = Commands();
        }
        else if (comNum == 8) {
            std::cout << figures[i]->classname() << std::endl;
            comNum = Commands();
        }
        else if (comNum == 9) {
            std::cout << figures[i]->size() << std::endl;
            comNum = Commands();
        }
        else if (comNum == 10) {
            for (auto &f : figures) {
                std::cout << f->classname() << std:: endl;
                f->draw();
                std::cout << std::endl;
            }
            comNum = Commands();
        }
        else if (comNum == 11) {
            double sumSquares = 0;
            for (auto &f : figures) {
                sumSquares += f->square();
            }
            std::cout << "Sum of squares = " << sumSquares << std:: endl;
            std::cout << std::endl;
            comNum = Commands();
        }
        else if (comNum == 12) {
            double sumPerimeters = 0;
            for (auto &f : figures) {
                sumPerimeters += f->perimeter();
            }
            std::cout << "Sum of squares = " << sumPerimeters << std:: endl;
            std::cout << std::endl;
            comNum = Commands();
        }
        else if (comNum == 13) {
            CVector2D massCenter(0, 0);
            double massSum = 0;
            for (auto &f : figures) {
                massCenter.x += f->mass() * f->position().x;
                massCenter.y += f->mass() * f->position().y;
                massSum += f->mass();
            }
            massCenter.x = massCenter.x / massSum;
            massCenter.y = massCenter.y / massSum;
            std::cout << "Mass center: {" << massCenter.x << ", " << massCenter.y << "}" << std::endl;
            std::cout << std::endl;
            comNum = Commands();
        }
        else if (comNum == 14) {
            unsigned size = 0;
            for (auto &f : figures) {
                size += f->size();
            }
            std::cout << "Sum of memory = " << size << std:: endl;
            std::cout << std::endl;
            comNum = Commands();
        }
        else if (comNum == 15) {
            std::sort(figures.begin(), figures.end(), [](IFigureUnion* a, IFigureUnion* b) {
                return a->mass() < b->mass();
            });
            for (auto &f : figures) {
                std::cout << f->mass() << " ";
            }
            std::cout << std::endl;
            std::cout << std::endl;
            comNum = Commands();
        }
        else if (comNum == 16) {
            std::cout << "Exiting program.." << std::endl;
            exit(0);
        }
        else {
            break;
        }
    }
    return 0;
}