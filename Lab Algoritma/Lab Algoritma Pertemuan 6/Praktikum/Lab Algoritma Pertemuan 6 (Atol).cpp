//mengubah string angka menjadi bil numerik long integer

#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	char kata[20];
	float angka, a;
	
	cout<<"Masukkan Sembarang Angka = ";
	cin>>kata;
	
	angka = atol(kata);
	a= angka + 8;
	
	cout<<"Hasil Perubahan ditambah dengan 8 = "<<a;
	
	getchar();
}
