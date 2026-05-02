#include <stdio.h>
#include <stdlib.h>

// Mendefinisikan struktur data karyawan
struct Karyawan {
    int id;
    char nama[50];
    char jabatan[30];
    float gaji;
};

int main() {
    int n, i;
    struct Karyawan *ptr;

    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    // Mengalokasikan memori secara dinamis menggunakan malloc
    ptr = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    // Validasi apakah memori berhasil dialokasikan
    if (ptr == NULL) {
        printf("Memori tidak cukup!\n");
        return 1; 
    }

    // Input data karyawan
    for (i = 0; i < n; i++) {
        printf("\nData Karyawan ke-%d\n", i + 1);
        printf("ID: ");
        scanf("%d", &(ptr + i)->id);
        printf("Nama: ");
        scanf(" %[^\n]s", (ptr + i)->nama); // Membaca string dengan spasi
        printf("Jabatan: ");
        scanf(" %[^\n]s", (ptr + i)->jabatan);
        printf("Gaji: ");
        scanf("%f", &(ptr + i)->gaji);
    }

    // Menampilkan data karyawan
    printf("\n============================================\n");
    printf("           DAFTAR DATA KARYAWAN             \n");
    printf("============================================\n");
    printf("%-5s %-20s %-15s %-10s\n", "ID", "Nama", "Jabatan", "Gaji");
    printf("--------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-5d %-20s %-15s Rp.%.2f\n", 
               (ptr + i)->id, (ptr + i)->nama, (ptr + i)->jabatan, (ptr + i)->gaji);
    }

    // Membebaskan memori yang telah dialokasikan
    free(ptr);

    return 0;
}