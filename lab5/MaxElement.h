//
// Created by Анна on 01.03.2020.
//

#pragma once

template <typename TMax>

TMax MaxElement(TMax* array, TMax N) {
    TMax max = array[0];
    for (int i = 0; i < N; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}