#include <iostream>
#include <algorithm>
#include "CircularBuffer.h"

template <typename T>
void print(CircularBuffer<T>& buffer) {
    for (typename CircularBuffer<T>::Iterator iterator = buffer.begin(); iterator != buffer.end(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

bool isPositive(int a) {
    return a > 0;
}

int main() {
    CircularBuffer<int> buf(2);
    buf.addLast(5);
    buf.addLast(1);
    buf.addLast(3);
    buf.addLast(7);
    for (int Iterator : buf) {
        std::cout << Iterator << " ";
    }
    std::cout << std::endl;
    buf.removeLast();
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        std::cout << *Iterator << " ";
    }
    std::cout << std::endl;
    buf.removeLast();
    buf.addFirst(2);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        std::cout << *Iterator << " ";
    }
    std::cout << std::endl;
    buf.addFirst(8);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        std::cout << *Iterator << " ";
    }
    std::cout << std::endl;
    buf.addByIndex(1, 9);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        std::cout << *Iterator << " ";
    }
    std::cout << std::endl;
    buf.removeByIndex(0);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        std::cout << *Iterator << " ";
    }
    std::cout << std::endl;
    buf.changeCapacity(5);
    print(buf);
    buf.addLast(6);
    buf.addLast(14);
    buf.addLast(32);
    buf.addLast(90);
    print(buf);
    buf.addLast(12);
    print(buf);
    buf.addLast(27);
    print(buf);
    buf.addFirst(128);
    print(buf);
    std::cout << buf.size() << std::endl;
    print(buf);
    CircularBuffer<int>::Iterator it = std::find(buf.begin(), buf.end(), 1);
    std::cout << ((it != buf.end()) ? *it : -1) << std::endl;
    it = std::max_element(buf.begin(), buf.end());
    std::cout << *it << std::endl;
    std::cout << ((std::is_sorted(buf.begin(), buf.end())) ? "TRUE" : "FALSE") << std::endl;
    it = std::min_element(buf.begin(), buf.end());
    std::cout << *it << std::endl;
    std::cout << std::count(buf.begin(), buf.end(), 5) << std::endl;
    std::cout << ((std::all_of(buf.begin(), buf.end(), isPositive)) ? "TRUE" : "FALSE") << std::endl;
    buf.addLast(-1);
    print(buf);
    std::cout << ((std::all_of(buf.begin(), buf.end(), isPositive)) ? "TRUE" : "FALSE") << std::endl;
    CircularBuffer<int> buffer(4);
    buffer.addLast(4);
    buffer.addLast(3);
    buffer.addLast(2);
    buffer.addLast(1);
    std::sort(buffer.begin(), buffer.end());
    print(buffer);
    buffer.removeFirst();
    print(buffer);

    return 0;
}