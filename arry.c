#include <stdio.h>

int main() {
    int angka[10];
    int i;
    int terbesar;

    printf("--- Program Mencari Angka Terbesar ---\n");

    for(i = 0; i < 10; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    terbesar = angka[0];

   
    for(i = 1; i < 10; i++) {
        if(angka[i] > terbesar) {
            terbesar = angka[i]; // Update nilai terbesar jika ditemukan yang lebih besar
        }
    }

    printf("\nAngka terbesar dari 10 input tersebut adalah: %d\n", terbesar);

    return 0;
}