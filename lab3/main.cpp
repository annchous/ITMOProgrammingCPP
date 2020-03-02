#include <iostream>
#include "Triangle.h"
#include "CSet.h"
using namespace std;

int main() {
    // First Task
    Triangle triangle1(0.0, 3.0, 3.0, 0.0, 3.0, 4.0);
    Triangle triangle2(0.0, 3.0, 3.0, 0.0, 3.0, 4.0);
    cout << "---| Square of triangle1: |---" << endl;
    cout << Triangle::TriangleSquare(triangle1) << endl;
    cout << "---| Square of triangle2: |---" << endl;
    cout << Triangle::TriangleSquare(triangle2) << endl;
    bool isEqual = triangle1 == triangle2;
    bool isNotEqual = triangle1 != triangle2;
    cout << "---| Are squares equal: |---" << endl;
    cout << isEqual << endl;
    cout << "---| Are squares not equal: |---" << endl;
    cout << isNotEqual << endl;
    Triangle::MoveOnVector(triangle1, 1.0, 1.0);
    cout << "---| Coordinates of triangle1 moved on vector (1.0, 1.0): |---" << endl;
    cout << triangle1;
    // Second Task
    CSet set1;
    CSet set2;
    cout << "---| is set1 == set2: |---" << endl;
    cout << (set1 == set2) << endl;
    cout << "---| is set1 != set2: |---" << endl;
    cout << (set1 != set2) << endl;
    CSet s(3);
    cout << "---| is Set s has element 3: |---" << endl;
    cout << s[3] << endl;
    s+=4;
    s+=7;
    cout << "---| Set s with added 4 and 7 elements: |---" << endl;
    cout << s;
    s-=4;
    cout << "---| Set s with deleted 4 element: |---" << endl;
    cout << s;
    set1+=1;
    set1+=2;
    set2+=3;
    set2+=2;
    set1+set2;
    cout << "---| set1 {1, 2, 3} + set2 {3, 2}: |---" << endl;
    cout << set1;
    return 0;
}