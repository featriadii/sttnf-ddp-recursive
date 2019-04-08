#include<iostream>
using namespace std;

//int b = 1;
//int c;

void genap(int a, int b, int c){
	
	if (a==0){
		//ini perintah untuk menampilkan jumlah deret bilangan genap
		cout << "\nJumlah deret angka tersebut adalah = " << c;
	}
	else {
		//ini perintah untuk menampilan bilangan genap
		cout << b << "  ";
		b+=2;
		genap(a-1, b, c);
	}
}

int main (){
	int a;
	
	cout << "Masukkan jumlah angka genap = "; cin >> a;
	
	genap(a, 2, 0);
}
