#include <iostream>
using namespace std;

int main() {
    int a, b = 0;

  
    cout << "Masukkan bilangan: ";
    cin >> a;

    
    if (a <= 1) {
        cout << a << " bukan termasuk bilangan PRIMA" << endl;
    } else {
       
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                b++;  
                break;          
            }
        }

        if (b == 0) {
            cout << a << " Termasuk bilangan PRIMA" << endl;
        } else {
            cout << a << " Bukan termasuk bilangan PRIMA" << endl;
        }
    }

    return 0;
}

