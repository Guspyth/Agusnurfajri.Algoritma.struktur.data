#include <iostream>
using namespace std;

int main() {
    int bilangan;          
    int *ptr_bilangan;      

   
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

  
    ptr_bilangan = &bilangan;

   
    if (*ptr_bilangan % 2 == 0) {
        cout << *ptr_bilangan << " adalah bilangan Genap.\n";
    } else {
        cout << *ptr_bilangan << " adalah bilangan Ganjil.\n";
    }

    return 0;
}

