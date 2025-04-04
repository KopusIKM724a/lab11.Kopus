#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter the size of the first array n: ";
    cin >> n;
    cout << "Enter the size of the second array m: ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }

    int lastElement = x[n - 1];

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (y[i] == lastElement) {
            count++;
        }
    }

    cout << "The last element of the first array (" << lastElement
        << ") appears in the second array " << count << " time(s)." << endl;

    delete[] x;
    delete[] y;

    return 0;
}
