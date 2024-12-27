#include <iostream>
#include <iomanip> // Untuk manipulasi output
using namespace std;

int main()
{
    int jenis, i, total = 0, diskon;
    int harga[3] = {2500, 2000, 1500};
    int bp[100], jumlah[100];
    char jp[100];

    string kode[] = {"D", "P", "S"}, nama_jenis[] = {"Dada", "Paha", "Sayap"};

    // Menampilkan menu
    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "-------------------------\n";
    cout << left << setw(8) << "Kode" << setw(10) << "Jenis" << "Harga\n";
    cout << "-------------------------\n";
    for (int j = 0; j < 3; j++) {
        cout << left << setw(8) << kode[j] << setw(10) << nama_jenis[j] << "Rp. " << harga[j] << endl;
    }
    cout << "-------------------------\n";

    // Input jumlah jenis
    cout << "Banyak jenis: ";
    cin >> jenis;

    // Input data pembelian
    for (i = 1; i <= jenis; i++) {
        cout << "\nJenis ke-" << i << endl;
        cout << "Jenis potong [D/P/S]: ";
        cin >> jp[i];
        cout << "Banyak potong       : ";
        cin >> bp[i];
    }

    // Menampilkan tabel pembelian
    cout << "\n\t\tGEROBAK FRIED CHICKEN\n";
    cout << "------------------------------------------------------\n";
    cout << "No.\tJenis\tHarga\tBanyak\tJumlah\n";
    cout << "------------------------------------------------------\n";

    for (i = 1; i <= jenis; i++) {
        cout << i << "\t";
        if (jp[i] == 'D' || jp[i] == 'd') {
            cout << "Dada" << "\t" << harga[0] << "\t" << bp[i] << "\t" << (bp[i] * harga[0]) << endl;
            jumlah[i] = bp[i] * harga[0];
        } else if (jp[i] == 'P' || jp[i] == 'p') {
            cout << "Paha" << "\t" << harga[1] << "\t" << bp[i] << "\t" << (bp[i] * harga[1]) << endl;
            jumlah[i] = bp[i] * harga[1];
        } else if (jp[i] == 'S' || jp[i] == 's') {
            cout << "Sayap" << "\t" << harga[2] << "\t" << bp[i] << "\t" << (bp[i] * harga[2]) << endl;
            jumlah[i] = bp[i] * harga[2];
        }
        total += jumlah[i];
    }

    cout << "------------------------------------------------------\n";
    cout << "\t\t\tJumlah Bayar Rp. " << total << endl;
    diskon = total * 0.1;
    cout << "\t\t\tPajak 10% Rp. " << diskon << endl;
    cout << "\t\t\tTotal Bayar Rp. " << total + diskon << endl;

    return 0;
}

