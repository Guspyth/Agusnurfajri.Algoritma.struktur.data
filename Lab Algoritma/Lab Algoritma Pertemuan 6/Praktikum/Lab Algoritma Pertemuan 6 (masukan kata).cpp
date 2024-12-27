#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	
	cout << "Masukkan sekarang kata = ";
	cin >> huruf;
	
	//manggili dan disebut ulang
	//huruf menjadi pindah
	
	/*Proses*/
	strcpy (pindah,huruf);
	cout << "Pemindahannya = " << pindah;
	
	getchar();
}
