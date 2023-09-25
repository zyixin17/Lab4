#include <iostream>
#include "deque.h"


deque::deque() {
    capacity = 1000;
    size = 0;
    data = new int[capacity];
}

deque::~deque() {
    delete[] data;
}

void deque::push_front(int value) {
    if (size == capacity) {
        std::cout << "Deque is full" << std::endl;
        return;
    }
    for (int i = size; i > 0; i--) {
        data[i] = data[i - 1];
    }
    data[0] = value;
    size++;
}

void deque::push_back(int value) {
    if (size == capacity) {
        std::cout << "Deque is full" << std::endl;
        return;
    }
    data[size] = value;
    size++;
}

int deque::pop_front() {
    if (size == 0) {
        std::cout << "empty" << std::endl;
        return -1;
    }
    int value = data[0];
    for (int i = 0; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size--;
    return value;
}

int deque::pop_back() {
    if (size == 0) {
        std::cout << "empty" << std::endl;
        return -1;
    }
    int value = data[size - 1];
    size--;
    return value;
}

int deque::peak_front() {
    if (size == 0) {
        std::cout << "empty" << std::endl;
        return -1;
    }
    return data[0];
}

int deque::peak_back() {
    if (size == 0) {
        std::cout << "empty" << std::endl;
        return -1;
    }
    return data[size - 1];
}

void deque::remove_all() {
    size = 0;
}

/*
int main(int argc, const char * argv[]) {
    // deque test

    deque d;
    
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.peak_back();
    std::cout << d.pop_back() << std::endl;
    d.peak_front();
    d.pop_back();
    d.pop_front();
    d.peak_back();
    d.peak_front();
    d.remove_all();
    d.peak_back();

    return 0;
}
*/