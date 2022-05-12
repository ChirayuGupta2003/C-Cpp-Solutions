#include <iostream>

using namespace std;

class complex {
public:
    float a, b;

    void setComplex(float a, float b) {
        this->a = a;
        this->b = b;
    }

    void displayComplex() {
        if (b >= 0)
            cout << a << " + " << b << "j\n";
        else
            cout << a << " " << b << "j\n";
    }

    complex addComplex(complex z2) {
        complex z3;
        z3.setComplex(a + z2.a, b + z2.b);
        return z3;
    }
};

int main() {
    complex z1, z2, z3;
    z1.setComplex(5, 6);
    z2.setComplex(10, -11);
    z3 = z1.addComplex(z2);
    z3.displayComplex();

}