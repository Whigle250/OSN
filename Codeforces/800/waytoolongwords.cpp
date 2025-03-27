#include <iostream>
#include <string>
using namespace std;

int main(){
	int n; cin >> n;
	string in[n];
	for(int i = 0;i < n; i++){
		cin >> in[i];
	}
	
	for(int i = 0;i < n; i++){
		int angka = in[i].size();
		int akhir = angka - 1;
		if(angka <= 10){
			cout << in[i] << endl;
		} else{
			int count = angka - 2;
			cout << in[i][0] << count << in[i][akhir] << endl;
		}
	}
}
