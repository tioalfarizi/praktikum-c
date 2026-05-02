#include <stdio.h>
#include <stdlib.h>

// Definisi struct mahasiswa
struct Mahasiswa {
    char nama[50];
    int nim;
    float nilai;
};

int main() {
    int n, i;
    struct Mahasiswa *mhs;
    float totalNilai = 0, rataRata;

    printf("=== Sistem Data Nilai Mahasiswa ===\n");
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    // Alokasi memori dinamis menggunakan pointer
    mhs = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    // Cek jika alokasi gagal
    if (mhs == NULL) {
        printf("Gagal mengalokasikan memori!\n");
        return 1;
    }

    // Input data menggunakan pointer
    for (i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf(" %[^\n]s", (mhs + i)->nama);
        printf("NIM: ");
        scanf("%d", &(mhs + i)->nim);
        printf("Nilai: ");
        scanf("%f", &(mhs + i)->nilai);

        // Menjumlahkan nilai untuk rata-rata
        totalNilai += (mhs + i)->nilai;
    }

    // Menghitung rata-rata
    rataRata = totalNilai / n;

    // Menampilkan data
    printf("\n============================================\n");
    printf("%-20s %-10s %-10s\n", "Nama", "NIM", "Nilai");
    printf("--------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f\n", 
               (mhs + i)->nama, (mhs + i)->nim, (mhs + i)->nilai);
    }

    printf("--------------------------------------------\n");
    printf("Rata-rata Nilai Kelas: %.2f\n", rataRata);
    printf("============================================\n");

    // Bebaskan memori
    free(mhs);

    return 0;
}