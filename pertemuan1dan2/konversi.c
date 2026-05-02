#include <stdio.h>

int main() {
    float meter, cm;

    printf("=== Program Konversi Meter ke CM ===\n");

    
    printf("Masukkan ukuran dalam meter: ");
    scanf("%f", &meter);

    
    cm = meter * 100;

    
    printf("%.2f meter sama dengan %.2f cm\n", meter, cm);

    return 0;
}