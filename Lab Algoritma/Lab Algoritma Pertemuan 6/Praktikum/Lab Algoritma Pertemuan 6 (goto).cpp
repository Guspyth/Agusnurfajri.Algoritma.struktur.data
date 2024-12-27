#include <iostream>
using namespace std;

int main ()
{
	char ulang;
	
	awal:
		
		cout << "Program perulangan menggunakan go to" << endl;
		cout << endl;
		cout << "Ingin melakukan perintah (y/t)? ";
		cin >> ulang;
		cout << endl;
		
		if (ulang == 'Y' || ulang == 'y') {
			goto awal;
		}
		if (ulang == 'T' || ulang == 't') {
			goto akhir;
		}
		
		akhir:
			
			cout << "Program selesai.";
			
			return 0;
}
