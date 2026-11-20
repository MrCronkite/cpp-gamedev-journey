#include "item.hpp"

std::string describe_item(const Item& item) {
    return item.name + " (value: " + std::to_string(item.value) + ")";
}