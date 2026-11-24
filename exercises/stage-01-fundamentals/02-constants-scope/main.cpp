#include <iostream>

int main() {
    constexpr int max_health = 100;

    std::cout << "Введите начальное здоровье: ";
    int health;
    std::cin >> health;

    const int starting_health = health;

    std::cout << "Максимальное здоровье: " << max_health << '\n';
    std::cout << "Начальное здоровье: " << starting_health << '\n';

    {
       int bonus = 20;

       std::cout << "Здоровье с бонусом: " << (bonus + starting_health) << '\n';
    }

    std::cout << "Рассчет завершен\n";

    return 0;
}