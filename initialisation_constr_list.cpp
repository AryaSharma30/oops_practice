#include <iostream>
using namespace std;

class Test {
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j) {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main() {
    Test t(8 ,12);
    return 0;
}
