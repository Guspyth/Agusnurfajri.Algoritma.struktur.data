#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "Agus";
	string jk = "Laki - Laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi ()
{
	string nama = "Gk tau";
	string jk = "Perempuan";
	return(nama + " adalah seorang " + jk);
}

int main ()
{
	siswa(); //fungsi void tidak memerlukan 'cout'
	cout << siswi() << endl; //fungsi non-void mengembalikan nilai, maka butuh 'cout'
}
