#include <iostream>

class PowOfTwo {
public:
    explicit PowOfTwo(int pow_)
            : pow(pow_)
    {
        for (int i = 0; i < abs(pow); ++i) {
            num *= 2;
        }

        if (pow < 0) {
            num = 1 / num;
        }
    }

    ~PowOfTwo() = default;

    double operator*(const int& x) {
        num = num * x;
        return num;
    }

    double operator/(const int& x) {
        num = num / x;
        return num;
    }

    void Print() {
        std::cout << num << std::endl;
    }

private:
    double num = 1;
    int pow;
};

int main() {
    PowOfTwo a(3);
    a.Print();
    a * 10;
    a.Print();
    a / 10;
    a.Print();
    return 0;
}