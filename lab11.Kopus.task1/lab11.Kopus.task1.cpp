#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    int* pa = &a;
    int* pb = &b;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
