#include <iostream>

using namespace std;

void hitung_jumlah_ganjil(int* result_ptr, int limit_y) {
    *result_ptr = 0;

    for (int n = 1; n <= limit_y; n += 2) {
        *result_ptr += n;
    }
}

int main() {
    int y = 20;
    int hasil_penjumlahan = 0;

    int* x_ptr = &hasil_penjumlahan;

    cout << "--- Prosedur Jumlah Bilangan Ganjil ---" << endl;
    cout << "Batas atas perhitungan (y): " << y << endl;
    
    hitung_jumlah_ganjil(x_ptr, y);

    cout << "Hasil penjumlahan bilangan ganjil (1 sampai " << y << "): " << *x_ptr << endl;
    cout << "---------------------------------------" << endl;
    
    int y_contoh = 10;
    int hasil_contoh = 0;
    hitung_jumlah_ganjil(&hasil_contoh, y_contoh); 
    cout << "Contoh Verifikasi (y=10): Hasil = " << hasil_contoh << endl;

    return 0;
}