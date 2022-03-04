#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int i = 2;

bool Prime(int n) {
    if (i == n)
        return true;
    else {
        if (n % i == 0)
            return false;
        else {
            i++;
            return Prime(n);
        }
    }
}

int len = 0;

int length(int n) {
    if (n == 0)
        return len++;
    else {
        len++;
        return length(n / 10);
    }
}

int armstrong(int n, int l) {
    if (n == 0)
        return 0;
    else
        return pow(n % 10, l) + armstrong(n / 10, l);
}


int j = 1;
int sum = 0;

bool perfect(int n) {
    if (n == j) {
        if (sum == n)
            return true;
        else
            return false;
    } else {
        if (n % j == 0)
            sum += j;
        j++;
        return perfect(n);
    }
}


int main() {
    int n;
    cout << "Enter a number: " << endl;
    for (int q = 0; q < 100; ++q) {
        cin >> n;
        cout << n << " is " << (Prime(n) ? "" : "not ") << "a prime number" << endl;
        cout << n << " is " << (armstrong(n, length(n)) == n ? "" : "not ") << "an armstrong number" << endl;
        cout << n << " is " << (perfect(n) ? "" : "not") << " a perfect number" << endl;
    }
}