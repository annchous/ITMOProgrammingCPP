//
// Created by Анна on 06.03.2020.
//

#include <iterator>

template <typename range, typename object>
bool none_of(const range begin, const range end, bool (&func)(object)) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if (func(*it)) {
            return false;
        }
    }
    return true;
}

template <typename range, typename object>
bool is_sorted(const range begin, const range end, bool (&func)(object, object)) {
    range prevIt = begin;
    for (auto it = next(begin); it != end; it = std::next(it)) {
        if (!func(*prevIt, *it)) {
            return false;
        }
    }
    return true;
}

template <typename range, typename object>
object find_not(const range begin, const range end, const object x) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if ((*it) != x) {
            return x;
        }
    }
    return object();
}