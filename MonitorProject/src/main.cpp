#include <iostream>

#include "../include/monitor.h"


/*
 * Test program
 * Example test taking the happy path
 * Test should be redone taking the bad path (empty model and negative width and height)
 *
 * Example input:
 * Enter monitor model: Lenovo
 * Enter monitor height: 1000
 * Enter monitor width: 600
 * Enter monitor price: 1200
 * Enter monitor model: Dell
 * Enter monitor height: 1200
 * Enter monitor width: 800
 * Enter monitor price: 1200
 *
 * Output:
 * m1: [model: Lenovo, width: 600, height:1000, price: 1200]
 * m2: [model: Dell, width: 800, height:1200, price: 1200]
 * m1 OLD price: 1200
 * m1 NEW price: 1300
 * m1 costs more than m2
 */
int main() {
    kst::monitor m1;
    kst::monitor m2;

    try {
        // input first monitor values
        m1.input_model();
        m1.input_height();
        m1.input_width();
        m1.input_price();
    } catch (const std::exception &e) {
        std::cout << e.what() << '\n';
        return 1;
    }

    // flush stream buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    try {
        // input second monitor values
        m2.input_model();
        m2.input_height();
        m2.input_width();
        m2.input_price();
    } catch (const std::exception &e) {
        std::cout << e.what() << '\n';
        return 2;
    }

    // print first monitor
    std::cout << "m1: " << m1 << '\n';

    // print second monitor
    std::cout << "m2: " << m2 << '\n';

    // increase first monitor's price
    std::cout << "m1 OLD price: " << m1.get_price() << '\n';
    m1 += 100;
    std::cout << "m1 NEW price: " << m1.get_price() << '\n';

    // operators >/< test
    if (m1 > m2) {
        std::cout << "m1 costs more than m2\n";
    } else if (m1 < m2) {
        std::cout << "m2 costs more than m1\n";
    } else {
        std::cout << "Both monitors are the same price\n";
    }

    return 0;
}
