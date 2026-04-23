#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game(int max_range, const char* level_name) {
    int secret_num, guess, attempts = 0;
    int best_score = 9999;
    char filename[20];
    
    sprintf(filename, "best_%s.txt", level_name);
    
    // Membaca skor terbaik dari file
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fscanf(file, "%d", &best_score);
        fclose(file);
    }

    srand(time(0));
    secret_num = (rand() % max_range) + 1;

    printf("\n--- Level: %s (1-%d) ---\n", level_name, max_range);
    if (best_score != 9999) printf("Skor Terbaik saat ini: %d tebakan\n", best_score);

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_num) printf("Terlalu tinggi!\n");
        else if (guess < secret_num) printf("Terlalu rendah!\n");
        else {
            printf("Selamat! Anda menebak dalam %d kali.\n", attempts);
            if (attempts < best_score) {
                printf("REKOR BARU!\n");
                file = fopen(filename, "w");
                fprintf(file, "%d", attempts);
                fclose(file);
            }
        }
    } while (guess != secret_num);
}

int main() {
    int choice;
    printf("Pilih Level:\n1. Easy (1-10)\n2. Medium (1-100)\n3. Hard (1-1000)\nPilihan: ");
    scanf("%d", &choice);

    if (choice == 1) play_game(10, "easy");
    else if (choice == 2) play_game(100, "medium");
    else if (choice == 3) play_game(1000, "hard");
    else printf("Pilihan tidak valid.\n");

    return 0;
}