#include <iostream>

#include "inventory.hpp"
#include "item.hpp"

int main() {
    Inventory bag;

    Item sword{"Sword", 100};
    Item potion{"Potion", 30};

    add_item(bag, sword);
    add_item(bag, potion);

    std::cout << "Items in inventory: " << item_count(bag) << '\n';

    for (const Item& item : bag.items) {
        std::cout << describe_item(item) << '\n';
    }

    return 0;
}