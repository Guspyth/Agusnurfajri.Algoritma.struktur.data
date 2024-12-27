#include <iostream>
using namespace std;

int hitung(int x, int y)
{
	if(y == 0) {
		return x;
	}
	else {
		return x * hitung(x,y-1); 
	}
}

int main()
{
	int x,y;
	cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
	cout << "\nMasukan Nilai X = ";
	cin >> x;
	cout << "Masukan Nilai Y = ";
	cin >> y;
	cout << "\n\n" << x << " Dipangkatkan " << y << " = " << hitung(x,y);
}
