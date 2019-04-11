#include<iostream>
using namespace std;

void deret(int n){
	int deret;
	int j = 1;
	
	for(int i = 0; i<n; i++){
		deret = deret+j;
		cout << j << " ";
		j+=2;
	}
	cout << "\nJumlah nilai ganjil pada batas " << n << " adalah = " << deret;
}

int main (){
	int n;
	
	cout << "Masukkan batas nilai = ";
	cin >> n;
	cout << endl;
	
	deret(n);
}
