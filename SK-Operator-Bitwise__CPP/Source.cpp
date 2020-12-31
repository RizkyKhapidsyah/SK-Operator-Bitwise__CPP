#include<iostream>
#include<conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int x;
	
	cout << "Masukan Nilai X = ";
	cin >> x;
	cout << "Nilai Awal : " << x << endl;
	
	x = x << 1;
	
	cout << "Hasil dari Geser 1 Bit Kekiri = " << x << endl;
	
	_getch();
	return 0;
}