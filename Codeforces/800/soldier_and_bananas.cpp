#include <iostream>

using namespace std;

int main(){
	int k,n,w; cin >> k >> n >> w;
	
	int count = 0;
	for(int i = 1; i <= w; i++){
		count += i;
	}
	
	int jumlah = k * count;
	
	if(jumlah - n > 0)
	cout << jumlah - n;
	else cout << 0;
}
