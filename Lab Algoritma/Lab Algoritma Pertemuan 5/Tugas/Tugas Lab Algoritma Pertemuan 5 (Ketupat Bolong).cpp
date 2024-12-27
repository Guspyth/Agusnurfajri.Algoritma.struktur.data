#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input jumlah baris: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            if (j < n - i || j >= n + i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 2 * n; j++) {
            if (j < n - i || j >= n + i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

