#include <iostream>

using namespace std;

long int factorial(long int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


long int strong(long int n) {
    if (n == 0)
        return 0;
    else
        return factorial(n % 10) + strong(n / 10);
}

int main() {
    long int n = 0;
    while (true) {
        if (strong(n) == n)
            cout << n << endl;
        n++;
    }
//    cout << "Enter the value of n:" << endl;
//    cin >> n;
//    cout << n << " is " << (strong(n) == n ? "" : "not ") << "a strong number" << endl;
}