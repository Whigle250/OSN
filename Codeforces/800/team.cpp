#include <iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int jumlah = 0;
    while(n--){
        int m;
        int count = 0;
        for(int i = 0; i < 3; i++){
            cin >> m;
            if(m == 1) count++;
        }
        if(count >= 2) jumlah++;
    }
    cout << jumlah;
    
}