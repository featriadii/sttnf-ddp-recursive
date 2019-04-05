#include<iostream>
using namespace std;

void pangkat(int x, int n){
	int hasil = 1;
	for (int i = 0; i<n; i++){
		hasil = hasil*x;
	}
	cout << "\nHasil dari " << x << "^" << n << " adalah = " << hasil;
}

int main (){
	int x, n;
	
	cout << "Masukkan sebuah angka = ";
	cin >> x;
	cout << x << " akan dipangkatkan = ";
	cin >> n;
	
	pangkat(x,n);
}
