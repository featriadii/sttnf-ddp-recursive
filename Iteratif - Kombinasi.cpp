#include<iostream>
using namespace std;


int main (){
	int n, r, nFak = 1, rFak = 1, nrFak = 1, kom;
	
	cout << "Masukkan nilai n = ";
	cin >> n;
	
	cout << "Masukkan nilai r = ";
	cin >> r;
	
	for(int i = 1; i<=n; i++){
		nFak = nFak*i;
	}
		
	for(int i = 1; i<=r; i++){
		rFak = rFak*i;
	}
	
	for(int i = 1; i<=(n-r); i++){
		nrFak = nrFak*i;
	}
	
	kom = nFak/rFak*nrFak;
	
	cout << "\nHasil kombinasi dari " << n << "C" << r << " adalah " << kom;
}
