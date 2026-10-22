//
// Created by Stefan Petrov on 19.09.26.
//

#include <utility>

#include "../include/empty_value_error.h"

namespace kst {
    empty_value_error::empty_value_error(std::string text) : message(std::move(text)) {
    }

    const char *empty_value_error::what() const noexcept {
        return message.c_str();
    }
}
