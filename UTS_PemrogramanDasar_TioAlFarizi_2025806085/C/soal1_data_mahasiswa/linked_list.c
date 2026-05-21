// Library untuk input output
#include <stdio.h>

// Library untuk malloc dan free
#include <stdlib.h>

// Library untuk strcmp
#include <string.h>

// Mengambil struct dan deklarasi fungsi
#include "linked_list.h"

// Fungsi untuk menambah mahasiswa
void addMahasiswa(Mahasiswa **head) {

    // Membuat node baru di memory
    Mahasiswa *baru = (Mahasiswa*) malloc(sizeof(Mahasiswa));

    // Input nama mahasiswa
    printf("Nama: ");
    scanf(" %[^\n]", baru->nama);

    // Input NIM mahasiswa
    printf("NIM: ");
    scanf("%s", baru->nim);

    // Input nilai tugas
    printf("Nilai Tugas: ");
    scanf("%f", &baru->tugas);

    // Input nilai UTS
    printf("Nilai UTS: ");
    scanf("%f", &baru->uts);

    // Input nilai UAS
    printf("Nilai UAS: ");
    scanf("%f", &baru->uas);

    // Menghitung nilai akhir
    baru->akhir =
        (0.3 * baru->tugas) +
        (0.3 * baru->uts) +
        (0.4 * baru->uas);

    // Menentukan huruf mutu
    if (baru->akhir >= 85)
        baru->mutu = 'A';

    else if (baru->akhir >= 70)
        baru->mutu = 'B';

    else if (baru->akhir >= 60)
        baru->mutu = 'C';

    else if (baru->akhir >= 50)
        baru->mutu = 'D';

    else
        baru->mutu = 'E';

    // Node baru menunjuk ke head lama
    baru->next = *head;

    // Head dipindahkan ke node baru
    *head = baru;

    // Notifikasi berhasil
    printf("\nData mahasiswa berhasil ditambahkan!\n");
}

// Fungsi menampilkan mahasiswa
void printMahasiswa(Mahasiswa *head) {

    // Pointer sementara
    Mahasiswa *temp = head;

    // Jika data kosong
    if (temp == NULL) {
        printf("\nData masih kosong!\n");
        return;
    }

    printf("\n===== DATA MAHASISWA =====\n");

    // Loop linked list
    while(temp != NULL) {

        printf("Nama         : %s\n", temp->nama);
        printf("NIM          : %s\n", temp->nim);
        printf("Nilai Tugas  : %.2f\n", temp->tugas);
        printf("Nilai UTS    : %.2f\n", temp->uts);
        printf("Nilai UAS    : %.2f\n", temp->uas);
        printf("Nilai Akhir  : %.2f\n", temp->akhir);
        printf("Huruf Mutu   : %c\n", temp->mutu);

        printf("--------------------------\n");

        // Pindah node
        temp = temp->next;
    }
}

// Fungsi mencari mahasiswa berdasarkan NIM
void cariMahasiswa(Mahasiswa *head) {

    // Variabel input NIM
    char cariNim[20];

    // Pointer traversal
    Mahasiswa *temp = head;

    // Penanda data ditemukan
    int ditemukan = 0;

    // Input NIM yang dicari
    printf("Masukkan NIM: ");
    scanf("%s", cariNim);

    // Traversal linked list
    while(temp != NULL) {

        // Membandingkan NIM
        if(strcmp(temp->nim, cariNim) == 0) {

            printf("\nData ditemukan!\n");
            printf("Nama         : %s\n", temp->nama);
            printf("NIM          : %s\n", temp->nim);
            printf("Nilai Akhir  : %.2f\n", temp->akhir);
            printf("Huruf Mutu   : %c\n", temp->mutu);

            ditemukan = 1;
            break;
        }

        // Pindah node
        temp = temp->next;
    }

    // Jika data tidak ditemukan
    if(!ditemukan) {
        printf("\nData tidak ditemukan!\n");
    }
}
// Fungsi menghapus mahasiswa berdasarkan NIM
void hapusMahasiswa(Mahasiswa **head) {

    // Jika linked list kosong
    if (*head == NULL) {
        printf("\nData masih kosong!\n");
        return;
    }

    // Input NIM yang ingin dihapus
    char cariNim[20];

    printf("Masukkan NIM yang ingin dihapus: ");
    scanf("%s", cariNim);

    // Pointer traversal
    Mahasiswa *temp = *head;
    Mahasiswa *prev = NULL;

    // Cari node yang sesuai
    while(temp != NULL &&
          strcmp(temp->nim, cariNim) != 0) {

        prev = temp;
        temp = temp->next;
    }

    // Jika data tidak ditemukan
    if(temp == NULL) {
        printf("\nData tidak ditemukan!\n");
        return;
    }

    // Jika node pertama yang dihapus
    if(prev == NULL) {
        *head = temp->next;
    }

    // Jika node tengah / akhir
    else {
        prev->next = temp->next;
    }

    // Hapus memory node
    free(temp);

    printf("\nData berhasil dihapus!\n");
}