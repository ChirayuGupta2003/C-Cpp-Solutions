#include <iostream>

using namespace std;

namespace hello {
    string var = "This is from namespace hello";
}

int main() {
    string var = "This is from main function";

    cout << var << endl;
    cout << hello::var << endl;
}