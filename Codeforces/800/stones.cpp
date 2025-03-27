#include <iostream>

using namespace std;

int main(){
	int n;cin>>n;
	string s; cin >> s;
	
	int count = 0;
	int jumlah = 0;
	
	char a = s[0];
	for(int i = 1; i <= n; i++){
		if(s[i] == a){
			count++;
		} else if(s[i] != a){
			a = s[i];
			jumlah += count;
			count = 0;
		}
	}
	
	cout << jumlah;
}
