#include <iostream>

using namespace std;

int main() {

    string nama_siswa = "Katarina";
    int nilai_pertandingan_1 = 90;
    int nilai_pertandingan_2 = 80;
    int nilai_pertandingan_3 = 78;
    double nilai_rata_rata;
    int rata_rata_bulat;
    int hadiah;

    
    nilai_rata_rata = (nilai_pertandingan_1 + nilai_pertandingan_2 + nilai_pertandingan_3) / 3.0;

   
    rata_rata_bulat = static_cast<int>(nilai_rata_rata);

    
    if (rata_rata_bulat >= 75) {
        if (rata_rata_bulat >= 85) {
            hadiah = 5000000; 
        } else {
            hadiah = 2500000;  
        }
    } else {
        hadiah = 1000000;  
    }

   
    cout << "> ./tugas4" << endl;
    cout << "Program Hitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa: " << nama_siswa << endl;
    cout << "Nilai Pertandingan I: " << nilai_pertandingan_1 << endl;
    cout << "Nilai Pertandingan II: " << nilai_pertandingan_2 << endl;
    cout << "Nilai Pertandingan III: " << nilai_pertandingan_3 << endl;
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata_bulat;
    cout << " dari hasil perlombaan yang diikutinya" << endl;
    cout << "Hadiah yang didapat adalah uang sebesar Rp. " << hadiah << endl;

    return 0;
}

