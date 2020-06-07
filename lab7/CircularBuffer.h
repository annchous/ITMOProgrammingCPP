//
// Created by Анна on 27.03.2020.
//

#pragma once

#include <exception>

template<class DATA = unsigned>
class CircularBuffer {
    DATA* data;
    unsigned CAPACITY;
    unsigned SIZE;
    unsigned hvost239;
public:

    class Iterator : public std::iterator<std::random_access_iterator_tag, DATA> {
    private:
        DATA* iterator;
    public:
        using difference_type = typename std::iterator<std::random_access_iterator_tag, DATA>::difference_type;
        Iterator() : iterator(nullptr) {}
        explicit Iterator(DATA* it) : iterator(it) {}
        Iterator(const Iterator &other) : iterator(other.iterator) {}
        inline Iterator& operator+=(difference_type it) { iterator += it; return *this;}
        inline Iterator& operator-=(difference_type it) { iterator -= it; return *this;}
        inline DATA& operator*() const {return *iterator;}
        inline DATA* operator->() const {return iterator;}
        inline DATA& operator[](difference_type i) const {return iterator[i];}
        inline Iterator& operator++() {++iterator; return *this;}
        inline Iterator& operator--() {--iterator; return *this;}
        inline Iterator operator++(DATA) {Iterator tmp(*this); ++iterator; return tmp;}
        inline Iterator operator--(DATA) {Iterator tmp(*this); --iterator; return tmp;}
        inline difference_type operator-(const Iterator& it) const {return iterator - it.iterator;}
        inline Iterator operator+(difference_type it) const {return Iterator(iterator + it);}
        inline Iterator operator-(difference_type it) const {return Iterator(iterator - it);}
        friend inline Iterator operator+(difference_type lhs, const Iterator& rhs) {return Iterator(lhs + rhs.iterator);}
        friend inline Iterator operator-(difference_type lhs, const Iterator& rhs) {return Iterator(lhs - rhs.iterator);}
        inline bool operator==(const Iterator& other) const {return iterator == other.iterator;}
        inline bool operator!=(const Iterator& other) const {return iterator != other.iterator;}
        inline bool operator>(const Iterator& other) const {return iterator > other.iterator;}
        inline bool operator<(const Iterator& other) const {return iterator < other.iterator;}
        inline bool operator>=(const Iterator& other) const {return iterator >= other.iterator;}
        inline bool operator<=(const Iterator& other) const {return iterator <= other.iterator;}
    };

    Iterator begin() const {
        return Iterator(data);
    }

    Iterator end() const {
        return Iterator(data + SIZE);
    }

    explicit CircularBuffer(unsigned CAPACITY = 1)
        : CAPACITY(CAPACITY)
        , SIZE(0)
        , hvost239(0)
        , data(new DATA[CAPACITY])
    {
        for (auto i = 0; i < CAPACITY; ++i) {
            data[i] = 0;
        }

        std::cout << "Circular buffer of capacity " << CAPACITY << " has been created.\n";
    }

    ~CircularBuffer() {
        delete[] data;
        CAPACITY = 0;
        SIZE = 0;
        hvost239 = 0;
        std::cout << "CircularBuffer has been deleted.\n";
    }

    std::size_t size() {
        return SIZE;
    }

    void addLast(DATA x) {
        if (hvost239 >= CAPACITY) {
            hvost239 = 0;
        }
        if (SIZE == CAPACITY) {
            data[hvost239] = x;
        }
        else {
            DATA* data_ = new DATA[SIZE + 1];
            for (auto i = 0; i < SIZE; ++i) {
                data_[i] = data[i];
            }
            data_[SIZE] = x;
            delete[] data;
            data = data_;
            ++SIZE;
        }
        hvost239++;
    }

    void removeLast() {
        if (SIZE == 0) {
            throw std::out_of_range("Empty array!");
        }
        DATA* data_ = new DATA[SIZE - 1];
        for (auto i = 0; i < SIZE - 1; ++i) {
            data_[i] = data[i];
        }
        delete[] data;
        data = data_;
        --SIZE;
    }

    void addFirst(DATA x) {
        if (SIZE == CAPACITY) {
            DATA* data_ = new DATA[SIZE];
            data_[0] = x;
            for (auto i = 1; i < SIZE; ++i) {
                data_[i] = data[i - 1];
            }
            delete[] data;
            data = data_;
        }
        else {
            DATA* data_ = new DATA[SIZE + 1];
            for (auto i = 1; i < SIZE + 1; ++i) {
                data_[i] = data[i - 1];
            }
            data_[0] = x;
            delete[] data;
            data = data_;
            ++SIZE;
        }
    }

    void removeFirst() {
        if (SIZE == 0) {
            throw std::out_of_range("Empty array!");
        }
        DATA* data_ = new DATA[SIZE - 1];
        for (auto i = 0; i < SIZE; ++i) {
            data_[i] = data[i + 1];
        }
        delete[] data;
        data = data_;
        --SIZE;
    }

    void addByIndex(std::size_t index, DATA x) {
        if (SIZE == CAPACITY) {
            data[index] = x;
        }
        else {
            DATA* data_ = new DATA[SIZE + 1];
            for (auto i = 0; i < index; ++i) {
                data_[i] = data[i];
            }
            data_[index] = x;
            for (auto i = index + 1; i < SIZE + 1; ++i) {
                data_[i] = data[i - 1];
            }
            delete[] data;
            data = data_;
            ++SIZE;
        }
    }

    void removeByIndex(std::size_t index) {
        if (SIZE == 0) {
            throw std::out_of_range("Empty array!");
        }
        else {
            DATA* data_ = new DATA[SIZE - 1];
            for (auto i = 0; i < index; ++i) {
                data_[i] = data[i];
            }
            for (auto i = index; i < SIZE; ++i) {
                data_[i] = data[i + 1];
            }
            delete[] data;
            data = data_;
            --SIZE;
        }
    }

    const DATA& getFirst() {
        if (SIZE == 0) {
            throw std::out_of_range("Empty array!");
        }
        return data[0];
    }

    const DATA& getLast() {
        if (SIZE == 0) {
            throw std::out_of_range("Empty array!");
        }
        return data[SIZE - 1];
    }

    void changeCapacity(unsigned newCapacity) {
        if (newCapacity <= CAPACITY) {
            throw std::bad_alloc();
        }
        DATA* data_ = new DATA[newCapacity];
        for (auto i = 0; i < SIZE; ++i) {
            data_[i] = data[i];
        }
        delete[] data;
        data = data_;
        std::cout << "Capacity changed from " << CAPACITY << " to " << newCapacity << std::endl;
        CAPACITY = newCapacity;
        hvost239 = SIZE;
    }

    const DATA& operator[](int index) {
        if (index < 0 || index > SIZE - 1) {
            throw (std::out_of_range("Index is out of range!"));
        }
        return data[index];
    }
};