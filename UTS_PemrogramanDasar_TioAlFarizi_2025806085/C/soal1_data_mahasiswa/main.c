// Library input output
#include <stdio.h>

// Mengambil header linked list
#include "linked_list.h"

int main() {

    // Head awal linked list kosong
    Mahasiswa *head = NULL;

    // Variabel menu
    int pilih;

    do {

        // Menu program
        printf("\n===== MENU =====\n");
        printf("1. Tambah Mahasiswa\n");
        printf("2. Tampilkan Mahasiswa\n");
        printf("3. Cari Mahasiswa\n");
        printf("4. Hapus Mahasiswa\n");
        printf("0. Keluar\n");

        // Input menu
        printf("Pilih menu: ");
        scanf("%d", &pilih);

        // Cek pilihan
        switch(pilih) {

            // Tambah mahasiswa
            case 1:
                addMahasiswa(&head);
                break;

            // Tampilkan mahasiswa
            case 2:
                printMahasiswa(head);
                break;

            // Cari mahasiswa
            case 3:
                 cariMahasiswa(head);
                 break;
                 
            // Hapus mahasiswa
            case 4:
                 hapusMahasiswa(&head);
                 break;

            // Keluar
            case 0:
                printf("\nProgram selesai.\n");
                break;

            // Jika menu salah
            default:
                printf("\nMenu tidak tersedia!\n");
        }

    } while(pilih != 0);

    return 0;
}