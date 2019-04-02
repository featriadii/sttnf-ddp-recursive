#include <iostream>
using namespace std;

int main() {
	int n, f1 = 0, f2 = 1, num;
	
    cout << "Masukan banyak deret fibonacci yang diinginkan : ";
    cin >> n;
    
	cout << endl;
    cout << n << " deret bilangan fibonacci yaitu " << f2 << "  ";
	for(int i = 1; i<=n; i++ ){
			num = f1 + f2;
			f1 = f2;
			f2 = num;
			
			cout << num << "  ";
	}	
}
