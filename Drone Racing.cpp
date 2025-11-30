#include <iostream>
using namespace std;

string cekLevelDrone(int kecepatan) {

    //level drone berdasarkan kecepatan
    string level;
    
    //if ELSE
    if (kecepatan < 40) {
        level = "Basic";
    }
    else {
        if (kecepatan >= 40 && kecepatan <= 79) {
            level = "Intermediate";
        }
        else {
            if (kecepatan >= 80 && kecepatan <= 119) {
                level = "Advanced";
            }
            else {
                if (kecepatan >= 120) {
                    level = "Ultra";
                }
                else {
                    level = "Tidak Valid";
                }
            }
        }
    }
    
    return level;
}

int main() {
    int kecepatan;
    
    cout << "==================================================+" << endl;
    cout << "       DRONE RACING - LEVEL KECEPATAN" << endl;
    cout << "==================================================+" << endl;
    cout << endl;
    
    // Input kecepatan dari user
    cout << "Masukkan kecepatan drone (km/h): ";
    cin >> kecepatan;
    
    // Validasi input
    if (cin.fail()) {
        cout << "Error: Input harus berupa angka!" << endl;
        return 1;
    }
    
    if (kecepatan < 0) {
        cout << "Error: Kecepatan tidak bisa negatif!" << endl;
        return 1;
    }
    
    //fungsi dan tampilkan hasil
    string hasil = cekLevelDrone(kecepatan);
    
    cout << endl;
    cout << "Kecepatan: " << kecepatan << " km/h" << endl;
    cout << "Level Drone: " << hasil << endl;
    cout << "==================================================" << endl;
    
    return 0;
}
