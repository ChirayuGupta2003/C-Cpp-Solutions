#include <iostream>

using namespace std;

void calculate_gross_sal(double basic_pay, double *gross_sal) {
    double da = .2 * basic_pay, hra = .1 * basic_pay;
    *gross_sal = basic_pay + da + hra;
}

int main() {
    double gross_sal, basic_pay;
    cout << "Enter basic pay: " << endl;
    cin >> basic_pay;
    calculate_gross_sal(basic_pay, &gross_sal);
    cout << "Gross salary is " << gross_sal << endl;

}