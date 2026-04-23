#include <stdio.h> // Library standar untuk input-output (printf, scanf)

int main() {
    // 1. Deklarasi Variabel
    int angka;

    // 2. Output ke Layar
    printf("Masukkan sebuah angka: ");

    // 3. Input dari User
    // Simbol & digunakan untuk mengambil alamat memori variabel
    scanf("%d", &angka);

    // 4. Logika (Contoh Percabangan)
    if (angka > 0) {
        printf("Angka %d adalah bilangan positif.\n", angka);
    } else {
        printf("Angka %d bukan bilangan positif.\n", angka);
    }

    return 0; // Menandakan program berakhir dengan sukses
}