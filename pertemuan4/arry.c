#include <stdio.h>

int main() {
    int angka[10];
    int i, terbesar;

    // Input 10 angka ke dalam array
    printf("Masukkan 10 angka:\n");
    for(i = 0; i < 10; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // Inisialisasi variabel terbesar dengan elemen pertama array
    terbesar = angka[0];

    // Proses mencari angka terbesar
    for(i = 1; i < 10; i++) {
        if(angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    // Tampilkan hasil
    printf("\nAngka terbesar adalah: %d\n", terbesar);

    return 0;
}