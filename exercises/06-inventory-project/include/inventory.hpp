#pragma once

#include <vector>
#include "item.hpp"

struct Inventory {
    std::vector<Item> items;
};

void add_item(Inventory& inventory, const Item& item);

int item_count(const Inventory& inventory);