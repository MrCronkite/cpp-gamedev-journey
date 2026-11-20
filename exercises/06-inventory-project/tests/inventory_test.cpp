#include <iostream>

#include "inventory.hpp"
#include "item.hpp"

int main() {
    Inventory bag;

    if (item_count(bag) != 0) {
        std::cerr << "Error: new inventory is not empty\n";
        return 1;
    }

    Item potion{"Potion", 30};
    add_item(bag, potion);

    if (item_count(bag) != 1) {
        std::cerr << "Error: expected one item\n";
        return 1;
    }

    if (bag.items[0].name != "Potion") {
        std::cerr << "Error: incorrect item name\n";
        return 1;
    }

    std::cout << "All inventory checks passed\n";
    return 0;
}