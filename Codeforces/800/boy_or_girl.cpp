#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	
	string result;
	set<char> seen;
	for(char c : s){
		if(seen.find(c) == seen.end()){
			result += c;
			seen.insert(c);
		}
	}
	
	if(result.size() % 2 == 0){
		cout << "CHAT WITH HER!";
	} else cout << "IGNORE HIM!";
	
	return 0;
}
