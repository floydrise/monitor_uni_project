//
// Created by Stefan Petrov on 19.09.26.
//

#include <utility>

#include "../include/negative_value_error.h"

namespace kst {
    negative_value_error::negative_value_error(std::string text) : message(std::move(text)) {
    }

    const char *negative_value_error::what() const noexcept {
        return message.c_str();
    }
}
