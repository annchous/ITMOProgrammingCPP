//
// Created by Анна on 11.02.2020.
//
#include "tasks.h"

// tasks realisation of twenty first  option

// task #5
// процедура, которая отбрасывает целую часть вещественного числа

void DropTheWholePartPtr(double* x) {
    *x -= (int) (*x);
}
void DropTheWholePartRef(double &x) {
    x -= (int) (x);
}

// task #8
// процедура, изменяющая вещественную переменную на обратное к ней число

void ReturnTheReturnNumberPtr(double* x) {
    *x = (double) 1 / (*x);
}
void ReturnTheReturnNumberRef(double &x) {
    x = (double) 1 / x;
}

// task #13
// процедура, передвигающая квадрат на заданный вектор

void MoveSquareByVectorPtr(square* sqr, double* x1, double* y1, double* x2, double* y2) {
    double x = *x2 - *x1;
    double y = *y2 - *y1;
    sqr->x1 += x;
    sqr->y1 += y;
    sqr->x2 += x;
    sqr->y2 += y;
    sqr->x3 += x;
    sqr->y3 += y;
}

void MoveSquareByVectorRef(square &sqr, double &x1, double &y1, double &x2, double &y2) {
    double x = x2 - x1;
    double y = y2 - y1;
    sqr.x1 += x;
    sqr.y1 += y;
    sqr.x2 += x;
    sqr.y2 += y;
    sqr.x3 += x;
    sqr.y3 += y;
}

// task #16
// процедура, меняющая в матрице две указанные строчки

void StringReplacementPtr(int **matrix, int *string1, int *string2, int *m) {
    for (int i = 0; i < *m; i++) {
        int temp = matrix[*string1 - 1][i];
        matrix[*string1 - 1][i] = matrix[*string2 - 1][i];
        matrix[*string2 - 1][i] = temp;
    }

}
void StringReplacementRef(int **&matrix, int &string1, int &string2, int &m) {
    for (int i = 0; i < m; i++) {
        int temp = matrix[string1 - 1][i];
        matrix[string1 - 1][i] = matrix[string2 - 1][i];
        matrix[string2 - 1][i] = temp;
    }
}