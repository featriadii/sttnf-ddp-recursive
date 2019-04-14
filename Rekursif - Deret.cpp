#include<iostream>
using namespace std;

//int b = 1;
//int c;

void deret(int a, int b, int c){
	
	if (a==0){
		return;
	}
	else {
		cout << b << "  ";
		b++;
		deret(a-1, b, c);
	}
}

int main (){
	int a;
	
	cout << "Masukkan jumlah angka deret = "; cin >> a;
	
	deret(a, 1, 0);
}
