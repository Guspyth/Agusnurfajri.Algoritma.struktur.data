#include <iostream>
#define phi 3.14159265
using namespace std;

int main()
{
    float jari_jari, tinggi, volume, luas;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari; // jari-jari misalnya 14
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi; // tinggi misalnya 14

    volume = phi * jari_jari * jari_jari * tinggi; // phinya diambil dari #define
    luas = 2 * phi * jari_jari * jari_jari; // phinya diambil dari #define dan dihitung dengan R kuadrat

    cout << "Luas lingkaran = " << luas << endl;
    cout << "Volume tabung = " << volume << endl;

    return 0;
}

