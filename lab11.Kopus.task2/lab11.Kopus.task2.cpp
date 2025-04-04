#include <iostream>
using namespace std;
int main() {
    int* p1 = new int(true);  
    int* p2 = new int(false); 

    cout << "Before swapping: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    delete p1;
    delete p2;

    return 0;
}
