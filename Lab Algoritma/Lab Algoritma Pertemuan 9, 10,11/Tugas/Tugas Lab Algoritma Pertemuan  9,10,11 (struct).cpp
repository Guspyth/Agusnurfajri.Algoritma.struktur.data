#include<iostream>
using namespace std;

struct name{


char name[20];
 };

struct roll {
char name[20];
struct name info;

}data;

int main(){
cout << "Masukan nama mahasiswa:";
cin >> data.info.name;
cout << "Masukan status mahasiswa: ";
cin >> data.name;

cout <<"\n\n---Data Store Completed--\n\n";
cout <<"Name:" << data.info.name <<"\nStatus: " << data.name;
}
