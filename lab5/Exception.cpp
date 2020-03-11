//
// Created by Анна on 04.03.2020.
//

#include "Exception.h"

#include <utility>

Exception::Exception(std::string message_, int exceptionCode_) {
    message = std::move(message_);
    exceptionCode = exceptionCode_;
}

std::string Exception::ShowMessage() {
    return message;
}

int Exception::GetCode() {
    return exceptionCode;
}
