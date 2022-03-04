#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int calculate_series_sum(int n) {
    if (n == 1)
        return 1;
    else
        return (factorial(n) / n) + calculate_series_sum(n - 1);
}

int main() {

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "The sum of the series is " << calculate_series_sum(n);

}