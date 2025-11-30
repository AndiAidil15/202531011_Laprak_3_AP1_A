#include <iostream>
using namespace std;

string cekLevelPeralatan(int umur) {
    //Menentukan level peralatan berdasarkan umur peserta
    
    string level;
    
    //Struktur Nested
    if (umur < 10) {
        level = "Starter Kit";
    }
    else {
        if (umur >= 10 && umur <= 15) {
            level = "Basic Gear";
        }
        else {
            if (umur >= 16 && umur <= 20) {
                level = "Pro Gear";
            }
            else {
                if (umur >= 21) {
                    level = "Expert Gear";
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
    int umur;
    
    cout << "==================================================" << endl;
    cout << "     -----SURVIVAL CAMP - LEVEL PERALATAN -----   " << endl;
    cout << "==================================================" << endl;
    cout << endl;
    
    //Input umur
    cout << "Masukkan umur peserta: ";
    cin >> umur;
    
    //Validasi input
    if (cin.fail()) {
        cout << "Error: Input harus berupa angka!" << endl;
        return 1;
    }
    
    if (umur < 0) {
        cout << "Error: Umur tidak bisa negatif!" << endl;
        return 1;
    }
    
    if (umur > 120) {
        cout << "Error: Umur Mustahil!" << endl;
        return 1;
    }
    
    //Fungsi dan tampilkan hasil
    string hasil = cekLevelPeralatan(umur);
    
    cout << endl;
    cout << "Umur Peserta: " << umur << " tahun" << endl;
    cout << "Level Peralatan: " << hasil << endl;
    cout << "==================================================" << endl;
    
    return 0;
}
