#include <iostream>
using namespace std;

int binarySearch(int data[], int size, int target) {
    int low = 0;               
    int high = size - 1;       

    while (low <= high) {     
        int mid = (low + high) / 2;  
        if (data[mid] == target) {       
            return mid;
        } else if (data[mid] < target) { 
            low = mid + 1;
        } else {                         
            high = mid - 1;
        }
    }

    return -1; 
}
int main() {
    int data[] = {11, 22, 33, 44, 55, 66, 77}; 
    int n = sizeof(data) / sizeof(data[0]);   
    int cari;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;

    int hasil = binarySearch(data, n, cari);  
    
    if (hasil != -1) {
        cout << "Data ditemukan di indeks ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    return 0;
}
