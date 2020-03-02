//
// Created by Анна on 25.02.2020.
//

#include "CSet.h"

CSet::CSet() {
    for (int i = 0; i < 10; i++) {
        Set[i] = false;
    }
}

CSet::CSet(int i) {
    Set[i] = true;
}

bool operator==(const CSet &set1, const CSet &set2) {
    bool isEqual = false;
    for (int i = 0; i < 10; i++) {
        if (set1.Set[i] == set2.Set[i]) {
            isEqual = true;
        }
        else {
            isEqual = false;
            break;
        }
    }
    return isEqual;
}

bool operator!=(const CSet &set1, const CSet &set2) {
    return !(set1 == set2);
}

void operator+(CSet &set1, CSet &set2) {
    for (int i = 0; i < 10; i++) {
        if ((!set1.Set[i]) && (set2.Set[i])) {
            set1.Set[i] = true;
        }
    }
}

void operator+=(CSet & set, int x) {
    if (!set.Set[x]) {
        set.Set[x] = true;
    }
}

void operator-=(CSet & set, int x) {
    if (set.Set[x]) {
        set.Set[x] = false;
    }
}

std::ostream &operator<<(std::ostream &out, const CSet & set) {
    out << "{ ";
    for (int i = 0; i < 10; i++) {
        if (set.Set[i]) {
            out << i << " ";
        }
    }
    out << "}" << std::endl;
    return out;
}

bool &CSet::operator[](int index) {
    return Set[index];
}

CSet::~CSet() = default;


