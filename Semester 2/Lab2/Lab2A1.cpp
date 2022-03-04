#include <iostream>

using namespace std;

class test {
    int private_var = 69; // private variable
public:
    int public_var = 6969; // public variable
};

int main() {
    test test;
//    test.private_var       gives error
    cout << test.public_var;
}