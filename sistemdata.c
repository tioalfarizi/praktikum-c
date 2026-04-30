#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n, i;
    float total = 0, rata_rata;
    struct Mahasiswa *ptr;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    ptr = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    if (ptr == NULL) {
        printf("Memori tidak cukup!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama : ");
        scanf(" %[^\n]s", (ptr + i)->nama);
        printf("Nilai: ");
        scanf("%f", &(ptr + i)->nilai);
        
        total += (ptr + i)->nilai;
    }

    rata_rata = total / n;

    printf("\n--- Daftar Nilai Mahasiswa ---\n");
    for (i = 0; i < n; i++) {
        printf("%d. %-20s : %.2f\n", i + 1, (ptr + i)->nama, (ptr + i)->nilai);
    }

    printf("------------------------------\n");
    printf("Rata-rata Nilai: %.2f\n", rata_rata);

    free(ptr);

    return 0;
}