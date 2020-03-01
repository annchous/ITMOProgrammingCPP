//
// Created by Анна on 11.02.2020.
//

//#ifndef LAB1_TASKS_H
//#define LAB1_TASKS_H

#pragma once

// tasks realisation of twenty first option

// task #5
// процедура, которая отбрасывает целую часть вещественного числа

void DropTheWholePartPtr(double *);
void DropTheWholePartRef(double &);

// task #8
// процедура, изменяющая вещественную переменную на обратное к ней число

void ReturnTheReturnNumberPtr(double *);
void ReturnTheReturnNumberRef(double &);

// task #13
// процедура, передвигающая квадрат на заданный вектор

struct square{
    double x1, y1;
    double x2, y2;
    double x3, y3;
};

void MoveSquareByVectorPtr(square*, double *, double *, double *, double *);
void MoveSquareByVectorRef(square&, double &, double &, double &, double &);

// task #16
// процедура, меняющая в матрице две указанные строчки

void StringReplacementPtr(int **, int *, int *, int *);
void StringReplacementRef(int **&, int &, int &, int &);


//#endif //LAB1_TASKS_H
