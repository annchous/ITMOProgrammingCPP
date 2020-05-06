//
// Created by Анна on 04.03.2020.
//

#pragma once

#include <exception>

class Exception : public std::exception {
private:
    const char* message;
public:
    Exception();
    Exception(const char* const &);
    ~Exception() override;
    [[nodiscard]] const char* what() const noexcept override;
};
