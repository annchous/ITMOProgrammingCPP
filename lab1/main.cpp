#include <iostream>
#include "tasks.h"

using namespace std;
int main() {


    // task #5
    double numberPtr = 123.456;
    DropTheWholePartPtr(&numberPtr);
    cout << numberPtr << endl;
    double number = 123.456;
    double &numberRef = number;
    DropTheWholePartRef(numberRef);
    cout << numberRef << endl;
    cout << "----------------" << endl;


    // task #8
    double someNumber = 123.456;
    ReturnTheReturnNumberPtr(&someNumber);
    cout << someNumber << endl;
    double oneMoreNumber = 123.456;
    double &oneMoreNumberRef = oneMoreNumber;
    ReturnTheReturnNumberRef(oneMoreNumberRef);
    cout << oneMoreNumberRef << endl;
    cout << "----------------" << endl;


    // task #13
    square sqr = {1.5, 1.5, 2.5, 1.5, 2.5, 2.5};
    square s = sqr;
    double startPointX = 1.0, startPointY = 1.0;
    double endPointX = 2.0, endPointY = 2.0;
    MoveSquareByVectorPtr(&sqr, &startPointX, &startPointY, &endPointX, &endPointY);
    cout << sqr.x1 << " " << sqr.y1 << endl;
    double &x1 = startPointX;
    double &y1 = startPointY;
    double &x2 = endPointX;
    double &y2 = endPointY;
    MoveSquareByVectorRef(s, x1, y1, x2, y2);
    cout << sqr.x1 << " " << sqr.y1 << endl;
    cout << "----------------" << endl;


    // task #16
    int n = 3, m = 3;
    int **matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = 0;
            matrix[i][j] += k;
        }
        k++;
    }

    cout << endl << "----------------" << endl;

    int str1 = 1, str2 = 3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    StringReplacementPtr(matrix, &str1, &str2, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    delete[] matrix;

    cout << "----------------" << endl;

    int **matrix2 = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix2[i] = new int[m];
    }
    k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix2[i][j] = 0;
            matrix2[i][j] += k;
        }
        k++;
    }

    cout << endl << "----------------" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    StringReplacementRef(matrix2, str1, str2, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    delete[] matrix2;

    cout << "----------------" << endl;

    return 0;
}