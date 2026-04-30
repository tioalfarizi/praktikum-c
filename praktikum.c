#include <stdio.h>
#include <stdlib.h> // 
struct Karyawan {
    char nama[50];
    int id;
    float gaji;
};

int main() {
    int n, i;
    struct Karyawan *list_karyawan;

    printf("=== Program Data Karyawan (Dynamic Memory) ===\n");
    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    list_karyawan = (struct Karyawan *)malloc(n * sizeof(struct Karyawan));

    if (list_karyawan == NULL) {
        printf("Memori tidak cukup!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nData Karyawan ke-%d\n", i + 1);
        printf("Nama   : ");
        scanf(" %[^\n]s", list_karyawan[i].nama); 
        printf("ID     : ");
        scanf("%d", &list_karyawan[i].id);
        printf("Gaji   : ");
        scanf("%f", &list_karyawan[i].gaji);
    }

    printf("\n==========================================\n");
    printf("           DAFTAR DATA KARYAWAN           \n");
    printf("==========================================\n");
    printf("ID\tNama\t\tGaji\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\tRp %.2f\n", 
                list_karyawan[i].id, 
                list_karyawan[i].nama, 
                list_karyawan[i].gaji);
    }

    free(list_karyawan);

    return 0;
}