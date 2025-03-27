#include <iostream>
using namespace std;

int main(){
	int n,k; cin >> n>>k;
	int a[n+1];
	bool nol = false;
	int jumlah = 0;
	for(int i = 1;i <= n; i++){
		cin >> a[i];
		if(a[i] > 0)nol =  true;
		if(i <= k && a[i] == 0)jumlah++;
	}
	int patok = a[k];
	int count = k - jumlah;
	for(int i = k+1;i <= n;i++){
		if(a[i] == patok && a[i] > 0)count++;
	}
	
	if(nol)cout << count;
	else cout << "0";
}
