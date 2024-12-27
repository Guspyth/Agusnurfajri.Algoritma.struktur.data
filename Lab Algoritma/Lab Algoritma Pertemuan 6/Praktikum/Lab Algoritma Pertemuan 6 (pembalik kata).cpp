#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	
	cout << "Masukan sembarang kata = ";
	cin >> huruf;
	
	cout << "Panjang kata yang diinputkan = ";
	cout << strlen(huruf);
	
	getchar();
}

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char kalimat[100];
	
	cout << "Masukan Kalimat : ";
	cin.getline(kalimat, sizeof(kalimat));
	
	int x = strlen(kalimat);
	cout << "Kalimat terbalik : ";
	
	for(int i=x-1; i>=0; i--) {
		cout << kalimat[i];
	}
	
	cout << endl;
	return 0;
}
