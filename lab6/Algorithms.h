//
// Created by Анна on 06.03.2020.
//

#pragma once

template <typename range, typename object>
bool none_of(range, range, bool (&func)(object));
template <typename range, typename object>
bool is_sorted(range, range, bool (&func)(object, object));
template <typename range, typename object>
object find_not(range, range, object);

#include "Algorithms.cpp"