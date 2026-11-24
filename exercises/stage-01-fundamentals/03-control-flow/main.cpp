#include <iostream>

enum class Action {
    Attack = 1,
    Heal = 2,
    Exit = 3
};

int main() {
    int heal = 70;
    bool running = true;
    int choice = 0;

    while (running)
    {
      std::cout << "HP: " << heal << '\n';

      std::cout << "1 — атаковать\n";
      std::cout << "2 — лечиться\n";
      std::cout << "3 — выйти\n";

      std::cout << "Введите число: ";

      if (!(std::cin >> choice)) {
         std::cout << "Нужно ввести число. \n";
         return 1;
      }

       Action action = static_cast<Action>(choice);

        switch (action) {
            case Action::Attack:
                std::cout << "Атака\n";
                break;

            case Action::Heal:
                heal += 10;
                std::cout << "Лечение +10 HP\n";
                break;

            case Action::Exit:
                std::cout << "Выход\n";
                running = false;
                break;

            default:
                std::cout << "Нет такой команды\n";
                break;
        }
    }

    return 0;
}