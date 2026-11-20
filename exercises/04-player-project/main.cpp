#include <iostream>
#include "player.hpp"

struct Player {
    int health;
    int score;
};

int main() {
    int earned_points = 100;
    int score = -300;

    Player player{100, score};

    int new_score = add_score(earned_points, score);

    std::cout << "Начальный счет: " << score << "\n";
    std::cout << "Получено очков: " << earned_points << "\n";
    std::cout << "Новый счет: " << new_score << "\n";

    return 0;
}