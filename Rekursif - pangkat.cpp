#include<iostream>
using namespace std;

int pangkat(int x, int n){
	if (n == 0){
		return (1);
	}
	else {
		return x*pangkat(x,n-1);
	}
}

int main (){
	int x, n, hasil;
	
	cout << "Masukkan sebuah angka = ";
	cin >> x;
	cout << x << " akan dipangkatkan = ";
	cin >> n;
	
	cout << endl;
	cout << "Hasil dari " << x << " dipangkatkan " << n << " adalah " << pangkat(x,n);
}
