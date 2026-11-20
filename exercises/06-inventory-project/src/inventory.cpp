#include "inventory.hpp"

void add_item(Inventory& inventory, const Item& item) {
    inventory.items.push_back(item);
}

int item_count(const Inventory& inventory) {
    return static_cast<int>(inventory.items.size());
}