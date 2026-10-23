//
// Created by Stefan Petrov on 19.09.26.
//

#pragma once

#include <string>
#include <utility>
#include <ostream>


namespace kst {
    class monitor {
    public:
        // constructor with variables
        monitor(std::string _model, const int _width, const int _height,
                const double _price) : model(std::move(_model)), width(_width),
                                       height(_height), price(_price) {
        };

        // default constructor
        monitor() = default;

        // getters
        [[nodiscard]] std::string get_model() const;

        [[nodiscard]] int get_width() const;

        [[nodiscard]] int get_height() const;

        [[nodiscard]] double get_price() const;

        // Функции за четене
        void input_model();

        void input_width();

        void input_height();

        void input_price();

        // За увеличаване на цената с подадена разлика
        void operator+=(double extra);

        // За сравнение на монитори по цена
        bool operator>(const monitor &m) const;

        bool operator<(const monitor &m) const;

    private:
        // member fields - модел, ширина, височина и цена
        std::string model;
        int width = 0;
        int height = 0;
        double price = 0.0;
    };

    // За печат към изходен поток
    std::ostream &operator<<(std::ostream &os, const monitor &monitor);
}
