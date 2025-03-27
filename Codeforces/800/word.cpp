#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s; cin >> s;
	
	int countu = 0;
	int countl = 0;
	for(int i = 0;i < s.size(); i++){
		if (islower(s[i])) {
            countl++; // Jika huruf kecil, tambahkan countl
        }
        if (isupper(s[i])) {
            countu++; // Jika huruf besar, tambahkan countu
        }
	}
	
	if(countl >= countu){
		transform(s.begin(), s.end(),s.begin(), ::tolower);
	} else  if(countl < countu)transform(s.begin(), s.end(),s.begin(), ::toupper);
	
	cout << s;
}
