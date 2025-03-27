#include <iostream>
using namespace std;

int main(){
	int m,n;cin >> m >> n;
	
	int count;
	if(m % 2 == 1){
		if(m == 1){
			count = n / 2;
		} else{
			count = ((m / 2) * n) + (n / 2);
		}
	} else{
		count = (m / 2) * n;
	}
	
	
	cout << count;
}
