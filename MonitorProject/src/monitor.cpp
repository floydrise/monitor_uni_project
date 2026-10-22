//
// Created by Stefan Petrov on 19.09.26.
//

#include "../include/monitor.h"

#include <iostream>

#include "../include/empty_value_error.h"
#include "../include/negative_value_error.h"

namespace kst {
    std::string monitor::get_model() const {
        return model;
    }

    int monitor::get_height() const {
        return height;
    }

    double monitor::get_price() const {
        return price;
    }

    int monitor::get_width() const {
        return width;
    }

    void monitor::input_model() {
        std::cout << "Enter monitor model: ";
        std::string mod;
        std::getline(std::cin, mod);
        if (mod.empty()) {
            throw empty_value_error("Model name cannot be empty");
        }
        model = mod;
    }

    void monitor::input_width() {
        std::cout << "Enter monitor width: ";
        int w;
        std::cin >> w;
        if (w <= 0) {
            throw negative_value_error("Cannot have negative value for width");
        }
        width = w;
    }

    void monitor::input_height() {
        std::cout << "Enter monitor height: ";
        int h;
        std::cin >> h;
        if (h <= 0) {
            throw negative_value_error("Cannot have negative value for height");
        }
        height = h;
    }

    void monitor::input_price() {
        std::cout << "Enter monitor price: ";
        double p;
        std::cin >> p;
        price = p;
    }

    std::ostream &operator<<(std::ostream &os, const monitor &monitor) {
        os << "[model: " << monitor.model << ", width: " << monitor.width << ", height:" << monitor.height <<
                ", price: " <<
                monitor.price << "]";
        return os;
    }

    void monitor::operator+=(const double extra) {
        price += extra;
    }

    bool monitor::operator>(const monitor &m) const {
        return price > m.price;
    }

    bool monitor::operator<(const monitor &m) const {
        return price < m.price;
    }
}
