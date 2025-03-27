#include <iostream>
using namespace std;

int main(){
	int a[6][6];
	int rows = 0;
	int col = 0;
	for(int i = 1;i < 6;i++){
		for(int j = 1;j < 6;j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				rows = i;
				col = j;
			}
		}
	}
	int swapr = 0;
	if(rows == 3){
		swapr = 0;
	}else if(rows < 3){
		swapr = 3 - rows;
	}else if(rows > 3){
		swapr = rows - 3;
	}
	
	int swapc = 0;
	if(col == 3){
		swapc = 0;
	}else if(col < 3){
		swapc = 3 - col;
	}else if(col > 3){
		swapc = col - 3;
	}
	
	cout << swapc + swapr;
}
