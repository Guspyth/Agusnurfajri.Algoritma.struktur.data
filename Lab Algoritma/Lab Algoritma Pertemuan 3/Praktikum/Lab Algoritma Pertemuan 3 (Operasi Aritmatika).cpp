#include <iostream>
using namespace std;

int main ()
{
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukan bilangan kesatu : ";
	cin >> x;
	cout << "Masukan bilangan kedua : ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "==============" << endl;
	cout << "Hasil penjumlahan : " << tambah << endl;
	cout << "Hasil pengurangan : " << kurang << endl;
	cout << "Hasil perkalian : " << kali << endl;
	cout << "Hasil pembagian : " << bagi << endl;
	
	return 0;
}
