#include <iostream>
using namespace std;

int main() {
    int baris, kolom, pilihan;
    int matriks1[100][100], matriks2[100][100], hasil[100][100];

    // Input jumlah baris dan kolom
    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> kolom;

    // Input elemen matriks pertama
    cout << "\nMasukkan elemen matriks pertama:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Matriks 1 [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks1[i][j];
        }
    }

    // Input elemen matriks kedua
    cout << "\nMasukkan elemen matriks kedua:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Matriks 2 [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks2[i][j];
        }
    }

    // Menu operasi
    cout << "\nPilih operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    // Operasi berdasarkan pilihan
    switch (pilihan) {
        case 1: // Penjumlahan
            for (int i = 0; i < baris; i++) {
                for (int j = 0; j < kolom; j++) {
                    hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                }
            }
            cout << "\nHasil Penjumlahan Matriks:\n";
            break;

        case 2: // Pengurangan
            for (int i = 0; i < baris; i++) {
                for (int j = 0; j < kolom; j++) {
                    hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                }
            }
            cout << "\nHasil Pengurangan Matriks:\n";
            break;

        case 3: // Perkalian
            if (baris != kolom) {
                cout << "Perkalian hanya bisa dilakukan pada matriks persegi!\n";
                return 0;
            }
            for (int i = 0; i < baris; i++) {
                for (int j = 0; j < kolom; j++) {
                    hasil[i][j] = 0;
                    for (int k = 0; k < kolom; k++) {
                        hasil[i][j] += matriks1[i][k] * matriks2[k][j];
                    }
                }
            }
            cout << "\nHasil Perkalian Matriks:\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
            return 0;
    }

    // Output hasil
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

