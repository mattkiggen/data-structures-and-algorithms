#include <iostream>
#include "array.h"

Array::Array(int length) :
    length(length),
    count(0),
    items(std::make_unique<int[]>(length)) {
}

Array::~Array() = default;

void Array::insert(int x) {
    if (this->count == this->length) {
        auto arr = std::make_unique<int[]>(this->length * 2);
        std::cout << arr.get() << std::endl;

        for (int i = 0; i < this->count; i++) {
            arr[i] = this->items[i];
        }

        this->items = std::move(arr);
        std::cout << this->items.get() << std::endl;
    }

    this->items[count++] = x;
}

int Array::indexOf(int x) {
    // Linear search - O(n)
    for (int i = 0; i < this->count; i++) {
        if (this->items[i] == x) return i;
    }

    return -1;
}

void Array::removeAt(int index) {
    if (index >= this->count)
        throw std::invalid_argument("Index out of range");

    for (int i = index; i < this->count; i++) {
        this->items[i] = this->items[(i + 1)];
    }

    this->count--;
}

int Array::size() {
    return this->count;
}
