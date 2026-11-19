#include "score.hpp"
#include <iostream>

int main() {
    if (add_points(100, 25) != 125 || add_points(0, 0) != 0) {
        std::cerr << "Ошибка: неверный счёт\n";
        return 1;
    }
    std::cout << "Проверки счёта пройдены\n";
    return 0;
}
