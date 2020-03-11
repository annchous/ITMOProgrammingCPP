//
// Created by Анна on 04.03.2020.
//

#pragma once

#include <exception>
#include <string>

class Exception {
private:
    std::string message;
    int exceptionCode;
public:

    Exception(std::string, int);
    std::string ShowMessage();
    int GetCode();
};