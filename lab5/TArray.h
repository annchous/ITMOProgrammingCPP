//
// Created by Анна on 04.03.2020.
//

#pragma once

#include <iostream>
#include "Exception.h"

template <class T>
class Array {
private:
    int length;
    T* data;
public:
    Array() {
        length = 0;
        data = nullptr;
    }

    explicit Array(int length_) {
        length = length_;
        data = new T[length];
    }

    ~Array() = default;

    void FillArray() {
        for (int i = 0; i < length; i++) {
            std::cin >> data[i];
        }
    }

    void DeleteArray() {
        delete[] data;
        data = nullptr;
        length = 0;
    }

    int GetLength() {
        return length;
    }

    T& operator[](int index) {
        if (index < 0 || index >= length) {
            throw Exception("Index out of range!");
        }
        return data[index];
    }

    void ShowArray() {
        for (int i = 0; i < length; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};
