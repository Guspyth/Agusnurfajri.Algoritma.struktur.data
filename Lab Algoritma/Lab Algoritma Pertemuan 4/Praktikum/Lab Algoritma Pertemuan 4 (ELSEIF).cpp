#include <iostream>
using namespace std;
int main()
{
	float pendapatan, jasa = 0, komisi = 0, total = 0;
	//clrscr();
	cout << "Total Pendpatan Hari Ini Rp. ";
	cin >> pendapatan;
	if (pendapatan >= 0 && pendapatan <= 200000) {
		jasa = 10000; 
		komisi = 0.1*pendapatan;
	}
	else if (pendapatan <= 500000){
		jasa = 20000;
		komisi = 0.15*pendapatan;
	}
	else if (pendapatan <= 800000){
		jasa = 30000;
		komisi = 0.2*pendapatan;
	}
	else {
		jasa = 40000;
		komisi = 0,25*pendapatan;
	}
	//menghitung total
	total = komisi*jasa;
	cout << "Uang Jasa Rp. " << jasa << endl;
	cout << "Uang Komisi Rp. " << komisi << endl;
	cout << "=================================" << endl;
	cout << "Hasil Total Rp. " << total << endl;
	getchar();
}
