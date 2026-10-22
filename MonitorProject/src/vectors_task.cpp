//
// Created by Stefan Petrov on 19.09.26.
//

#include <algorithm>
#include <iostream>
#include <vector>

#include "../include/monitor.h"

// Test program
int main() {
    std::vector<kst::monitor> monitors{
        {"HP", 300, 400, 200},
        {"Lenovo", 200, 100, 150},
        {"Dell", 220, 140, 320},
    };

    // before sort
    for (const kst::monitor &monitor: monitors) std::cout << monitor << '\n';
    std::cout << '\n';

    // default sort - ascending by price
    std::sort(monitors.begin(), monitors.end());
    for (const kst::monitor &monitor: monitors) std::cout << monitor << '\n';
    std::cout << '\n';

    // reverse sort - descending by price
    std::sort(monitors.begin(), monitors.end(),
              [](const kst::monitor &a, const kst::monitor &b) {
                  return a.get_price() > b.get_price();
              });
    for (const kst::monitor &monitor: monitors)
        std::cout << monitor << '\n';
    std::cout << '\n';

    // heigh * width sort
    std::sort(monitors.begin(), monitors.end(), [](const kst::monitor &a, const kst::monitor &b) {
        return a.get_height() * a.get_width() < b.get_height() * b.get_width();
    });
    for (const kst::monitor &monitor: monitors)
        std::cout << monitor << "area: " << monitor.get_height() * monitor.get_width() << '\n';
    std::cout << '\n';

    // Increate "Lenovo" price -> it goes at the bottom after sorting
    monitors[0] += 400;
    std::sort(monitors.begin(), monitors.end());
    for (const kst::monitor &monitor: monitors)
        std::cout << monitor << '\n';
    std::cout << '\n';

    return 0;
}
