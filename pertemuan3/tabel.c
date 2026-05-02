#include <stdio.h>

int main() {
    int angka, i;

    printf("--- Program Tabel Perkalian ---\n");
    printf("Masukkan angka yang ingin dikalikan: ");
    scanf("%d", &angka);

    printf("\nTabel Perkalian %d:\n", angka);
    printf("--------------------------\n");

    for(i = 1; i <= 10; i++) {
        // format: angka x pengali = hasil
        printf("%d x %d \t= %d\n", angka, i, angka * i);
    }
    
    printf("--------------------------\n");

    return 0;
}