#include <iostream>
using namespace std;

class Mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();

	Mahasiswa(string pnama) 
    {
		setID();
	}
};

int Mahasiswa::nim = 210;

void Mahasiswa::setID() {
	id = ++nim;
}

void Mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

