#include <iostream>

using namespace std;

void count_even(int *count, int number) {
    if (number % 2 == 0)
        ++*count;
}

int main() {
    int count = 0, n, number;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ":" << endl;
        cin >> number;
        count_even(&count, number);
    }
    cout << "The number of even numbers entered is " << count << endl;
}