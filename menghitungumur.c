#include <stdio.h>

int main() {
    int tahun_lahir, tahun_sekarang, umur;
    
    
    tahun_sekarang = 2026;

    printf("--- Program Hitung Umur ---\n");
    
    
    printf("Masukkan tahun lahir kamu: ");
    scanf("%d", &tahun_lahir);

    
    umur = tahun_sekarang - tahun_lahir;

    
    printf("Berarti di tahun %d, umur kamu adalah %d tahun.\n", tahun_sekarang, umur);

    return 0;
}