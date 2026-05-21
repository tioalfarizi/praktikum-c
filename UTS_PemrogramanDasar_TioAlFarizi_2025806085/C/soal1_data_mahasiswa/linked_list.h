// Mencegah file header dibaca dua kali
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Struct Mahasiswa
typedef struct Mahasiswa {

    // Nama mahasiswa
    char nama[100];

    // NIM mahasiswa
    char nim[20];

    // Nilai
    float tugas, uts, uas;

    // Nilai akhir
    float akhir;

    // Huruf mutu
    char mutu;

    // Pointer next node
    struct Mahasiswa *next;

} Mahasiswa;

// Fungsi tambah mahasiswa
void addMahasiswa(Mahasiswa **head);

// Fungsi tampil mahasiswa
void printMahasiswa(Mahasiswa *head);

// Fungsi cari mahasiswa
void cariMahasiswa(Mahasiswa *head);

// Fungsi hapus mahasiswa
void hapusMahasiswa(Mahasiswa **head);

// Penutup header guard
#endif