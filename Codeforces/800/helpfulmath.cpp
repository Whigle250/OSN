#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Buat array untuk menyimpan angka-angka
    int counts[4] = {0}; // Array index 0 tidak digunakan, index 1 untuk angka '1', 2 untuk '2', dan 3 untuk '3'
    
    // Hitung jumlah kemunculan setiap angka
    for (int i = 0; i < s.size(); i += 2) { // i += 2 untuk melompati tanda '+'
        counts[s[i] - '0']++;
    }
    
    // Buat string hasil yang diurutkan
    string result;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < counts[i]; j++) {
            if (!result.empty()) {
                result += "+";
            }
            result += to_string(i);
        }
    }
    
    // Tampilkan hasil
    cout << result << endl;
    
    return 0;
}

