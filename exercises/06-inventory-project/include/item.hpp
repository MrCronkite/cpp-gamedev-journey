#pragma once

#include <string>

struct Item {
    std::string name;
    int value;
};

std::string describe_item(const Item& item);