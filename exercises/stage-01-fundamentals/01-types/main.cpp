#include <iostream>
#include <limits>

int main() {
    float coins = 100.5f;
    int health = 10;
    double speed = 4.5;
    bool door_open = false;
    auto score = 100;
    unsigned int lives = 0;

    std::cout << "Монеты: " << coins << '\n';
    std::cout << "Здоровье: " << health << '\n';
    std::cout << "Скорость: " << speed << '\n';
    std::cout << "Дверь открыта: " << (door_open ? "Да \n" : "Нет \n");
    std::cout << "Счет: " << score << '\n';
    std::cout << "Жизни: " << (lives - 1) << '\n';

    std::cout << sizeof(coins) << '\n';
    std::cout << sizeof(health) << '\n';
    std::cout << sizeof(speed) << '\n';

    return 0;
}