#include <iostream>
using namespace std;

int main(){
	int n; cin >>n;
	string in;
	int count = 0;
	for(int i = 0;i < n; i++){
		cin >> in;
		if(in == "X++" || in == "++X")count++;
		else count--;
	}
	cout << count;
}
