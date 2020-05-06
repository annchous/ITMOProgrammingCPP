#include <iostream>
#include "MaxElement.h"
#include "TArray.h"
#include "Exception.h"

int main() {
    int N;

    std::cout << "Enter length of your array: " << std::endl;
    std::cin >> N;
    int array[N];
    std::cout << "Enter N values to fill your array: " << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    std::cout << "Max element in your array is: " << MaxElement(array, N) << std::endl;


    std::cout << "-------------------INTEGER TYPE-------------------" << std::endl;
    std::cout << "Enter length of your array: " << std::endl;
    std::cin >> N;
    Array<int> arrI(N);
    std::cout << "Array's length: " << arrI.GetLength() << std::endl;
    std::cout << "Enter N int values to fill your array: " << std::endl;
    arrI.FillArray();
    std::cout << "Enter an index to show the element: " << std::endl;
    int index;
    std::cin >> index;
    try {
        std::cout << arrI[index] << std::endl;

    } catch (Exception& exception) {
        std::cout << "Error: " << exception.what() << std::endl;
        exit(1);
    }

    std::cout << "-------------------DOUBLE TYPE-------------------" << std::endl;
    std::cout << "Enter length of your array: " << std::endl;
    std::cin >> N;
    Array<double> arrD(N);
    std::cout << "Array's length: " << arrD.GetLength() << std::endl;
    std::cout << "Enter N double values to fill your array: " << std::endl;
    arrD.FillArray();
    std::cout << "Enter an index to show the element: " << std::endl;
    std::cin >> index;
    try {
        std::cout << arrD[index] << std::endl;

    } catch (Exception& exception) {
        std::cout << "Error: " << exception.what() << std::endl;
        exit(1);
    }

    std::cout << "Your double array: " << std::endl;
    arrD.ShowArray();
    arrD.DeleteArray();


    return 0;
}