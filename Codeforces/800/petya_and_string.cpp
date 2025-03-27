#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string satu,dua;
    cin >> satu >> dua;
    transform(satu.begin(),satu.end(),satu.begin(),::tolower);
    transform(dua.begin(),dua.end(),dua.begin(),::tolower);

    if(satu == dua){
        cout << 0;
    } else if(satu > dua){
        cout << 1;
    } else if(satu < dua){
        cout << -1;
    }
}