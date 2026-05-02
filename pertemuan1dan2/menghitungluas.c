#include <stdio.h>

int main() {
    float sisi, keliling;

    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    keliling = 4 * sisi;

    printf("Keliling persegi adalah: %.2f\n", keliling);

    return 0;
}