//
// Created by Stefan Petrov on 19.09.26.
//

#pragma once
#include <exception>
#include <string>

namespace kst {
    class negative_value_error : public std::exception {
    public:
        explicit negative_value_error(std::string text);

        [[nodiscard]] const char *what() const noexcept override;

    private:
        std::string message;
    };
}
