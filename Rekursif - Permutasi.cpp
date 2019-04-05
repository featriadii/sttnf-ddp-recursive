#include<iostream>
using namespace std;

int faktor (int a){
	if (a == 0){
		return 1;
	}
	else {
		return a*faktor(a-1);
	}
}

void permutasi (int n, int r){
	int mutasi;
	
	mutasi = faktor(n)/faktor(r)*faktor(n-r);
	cout << "\nNilainya adalah = " << mutasi;
}

int main (){
	int n, r;
	
	cout << "Masukkan n = ";
	cin >> n;
	cout << "Masukkan r = ";
	cin >> r;
	
	permutasi (n,r);
}




