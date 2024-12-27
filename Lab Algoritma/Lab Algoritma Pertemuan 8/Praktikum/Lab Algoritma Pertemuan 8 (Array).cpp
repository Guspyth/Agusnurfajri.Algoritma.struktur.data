#include <iostream>
using namespace std;

int array1() {
	int nomor[2][3] = {1, 4, 6, 2, 3, 5};
	cout << "Array 1" << endl;
	cout << nomor[1][2];
}

int array2() {
	const int baris = 2;
	const int kolom = 3;
	int nomor[baris][kolom] = {1, 4, 6, 2, 3, 5};
	
	cout << "\nArray 2\n";
	for(int a = 0; a < baris; a++){
		for(int b = 0; b < kolom; b++){
			cout << nomor[a][b] << " ";
		}
		cout << endl;
	}
}

int array3(){
	int hasil[3][3];
	
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++) {
			cout << "Data " << " - " << b << " =";
			cout << "\nJumlah Penjualan = ";
			cin >> hasil[a][b];
		}
	}
	
	cout << "\nHasil Penjualan Barang";
	cout << "\n=================================";
	cout << "\n                                ";
	cout << "\n  |  2001  |  2002  |  2003  |  ";
	cout << "\n                                ";
	cout << "\n=================================";
	cout << endl;
	
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++) {
			cout << "  |   " << hasil[a][b] << "   "; 
		}
		cout << endl;
	}
}

int main() {
//	array1();
//	array2();
	array3();
}
