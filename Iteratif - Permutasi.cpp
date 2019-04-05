#include<iostream>
using namespace std;

int main (){
	int n, r, nPer = 1, nrPer = 1, per;
	
	cout << "Masukkan nilai n = ";
	cin >> n;
	
	cout << "Masukkan nilai r = ";
	cin >> r;
	
	for(int i = 1; i<=n; i++){
		nPer = nPer*i;
	}
		
	for(int i = 1; i<=(n-r); i++){
		nrPer = nrPer*i;
	}
	
	per = nPer/nrPer;
	
	cout << "\nHasil kombinasi dari " << n << "P" << r << " adalah " << per;
	
}
