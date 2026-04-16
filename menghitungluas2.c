#include <stdio.h>

int main() {
    float jari_jari, luas;
    const float PI = 3.14;

    
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    
    luas = PI * jari_jari * jari_jari;

    
    printf("Luas lingkaran dengan jari-jari %.2f adalah %.2f\n", jari_jari, luas);

    return 0;
}