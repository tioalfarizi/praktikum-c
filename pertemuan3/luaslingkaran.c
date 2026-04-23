#include <stdio.h>

// Definisi konstanta PI
#define PI 3.14

// 1. Membuat Fungsi Luas
// float karena hasilnya kemungkinan besar desimal
float hitungLuas(float r) {
    float hasil;
    hasil = PI * r * r;
    return hasil; // Mengirimkan hasil hitungan kembali ke main
}

int main() {
    float jariJari, luas;

    printf("--- Program Luas Lingkaran ---\n");
    printf("Masukkan jari-jari: ");
    scanf("%f", &jariJari);

    // 2. Memanggil Fungsi
    luas = hitungLuas(jariJari);

    // Menampilkan hasil dengan 2 angka di belakang koma
    printf("Luas Lingkaran = %.2f\n", luas);

    return 0;
}