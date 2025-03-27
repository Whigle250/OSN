#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long n; cin >> n;
	int count = 0;
	string ns = to_string(n);
	for(int i = 0;i < ns.size();i++){
		if(ns[i] == '7' || ns[i] == '4'){
			count++;
		}
	}
	if(count == 4 || count == 7){
		cout << "YES";
	} else{
		cout << "NO";
	}
}
