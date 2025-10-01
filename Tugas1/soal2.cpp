#include <iostream>

using namespace std;

void hitung_persamaan_variasi(long long* x_ptr, int y_val, long long* z_ptr) {
    *x_ptr = 0;
    *z_ptr = 1;

    for (int n = 1; n <= y_val; ++n) {
        *x_ptr += (long long)n * n;

        *z_ptr *= (2 * n - 1);
    }
}

int main() {
    long long x = 0;
    long long z = 1;
    int y = 20;

    long long* x_ptr = &x;
    long long* z_ptr = &z;

    cout << "--- Implementasi Persamaan Matematika dengan Pointer ---" << endl;
    cout << "Batas atas perhitungan (y): " << y << endl;
    
    hitung_persamaan_variasi(x_ptr, y, z_ptr);

    cout << "Nilai akhir *x (Penjumlahan Kuadrat): " << *x_ptr << endl;
    cout << "Nilai akhir *z (Perkalian Bilangan Ganjil): " << *z_ptr << endl;
    cout << "--------------------------------------------------------" << endl;

    long long x_contoh = 0;
    long long z_contoh = 1;
    int y_contoh = 4;
    hitung_persamaan_variasi(&x_contoh, y_contoh, &z_contoh);
    cout << "Contoh Verifikasi (y=4):" << endl;
    cout << "  -> *x = " << x_contoh << " (Target: 30)" << endl;
    cout << "  -> *z = " << z_contoh << " (Target: 105)" << endl;

    return 0;
}