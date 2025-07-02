#include <iostream>
using namespace std;

const int SIZE = 10; 

int main() {
    int hashtable[SIZE]; 
    for (int i = 0; i < SIZE; i++) {
        hashtable[i] = -1; 
    }

    int n, x;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> x;

        int index = x % SIZE; 

        if (hashtable[index] == -1) {
            hashtable[index] = x;
        } else {
            cout << "Collision terjadi di index " << index << "! Data " << x << " tidak dimasukkan.\n";
        }
    }

    
    cout << "\nIsi Hashtable:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Index " << i << ": ";
        if (hashtable[i] != -1)
            cout << hashtable[i] << endl;
        else
            cout << "[kosong]" << endl;
    }

    return 0;
}
