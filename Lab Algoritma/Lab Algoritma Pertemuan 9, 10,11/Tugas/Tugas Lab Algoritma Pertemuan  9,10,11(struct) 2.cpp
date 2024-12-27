#include <iostream>
#include <string>
using namespace std;

// Definisi struct mahasiswa
struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
};

mhs bayar[2]; // Array untuk menyimpan data mahasiswa

int main() {
    int bts, var, tetap;
    
    for (int i = 0; i < 2; i++) {
        // Input data
        cout << "\n\n--------------------\n";
        cout << "Nama mahasiswa: ";
        cin >> bayar[i].nama;
        cout << "NIM: ";
        cin >> bayar[i].nim;
        cout << "Mata kuliah: ";
        cin >> bayar[i].matkul;
        
    input: // Label untuk pengulangan validasi input SKS
        cout << "Jumlah SKS: ";
        cin >> bayar[i].sks;

        if (bayar[i].sks < 0) {
            cout << "Jumlah SKS tidak boleh negatif. Silakan input ulang.\n";
            goto input;
        }

        // Perhitungan biaya
        if (bayar[i].sks == 0) {
            tetap = 250000;
            var = bayar[i].sks * 250000;
        } else if (bayar[i].sks <= 2) {
            tetap = 300000;
            var = bayar[i].sks * 300000;
        } else {
            tetap = 400000; // Jika SKS lebih dari 2, tetapkan biaya tetap lainnya
            var = bayar[i].sks * 300000; // Variabel biaya dihitung tetap
        }

        // Output data mahasiswa
        cout << "\n\n--------------------\n";
        cout << "        Output        \n";
        cout << "--------------------\n";
        cout << "Nama mahasiswa: " << bayar[i].nama << endl;
        cout << "NIM: " << bayar[i].nim << endl;
        cout << "Mata kuliah: " << bayar[i].matkul << endl;
        cout << "Jumlah SKS: " << bayar[i].sks << endl;
        cout << "SPP tetap: Rp" << tetap << endl;
        cout << "SPP variabel: Rp" << var << endl;
        cout << "--------------------\n\n";
    }
    
    return 0;
}

