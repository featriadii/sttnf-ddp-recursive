#include<iostream>
using namespace std;

//int b = 1;
//int c;

void ganjil(int a, int b, int c){
	
	if (a==0){
		//ini perintah untuk menampilkan jumlah deret bilangan ganjil
		cout << "\nJumlah deret angka tersebut adalah = " << c;
	}
	else {
		//ini perintah untuk menampilan bilangan ganjil
		cout << b << "  ";
		c = c + b;
		b+=2;
		ganjil(a-1, b, c);
	}
}

int main (){
	int a;
	
	cout << "Masukkan jumlah angka ganjl = "; cin >> a;
	
	ganjil(a, 1, 0);
}
