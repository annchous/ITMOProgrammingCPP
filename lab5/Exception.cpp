//
// Created by Анна on 04.03.2020.
//

#include "Exception.h"

Exception::Exception() = default;

Exception::Exception(const char *const &message_)
            : message(message_)
{}

const char *Exception::what() const noexcept {
    return message;
}

Exception::~Exception() = default;

