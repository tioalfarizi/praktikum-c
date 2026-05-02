import random

def get_best_score(level):
    try:
        with open(f"best_{level}.txt", "r") as f:
            return int(f.read())
    except FileNotFoundError:
        return float('inf')

def save_best_score(level, score):
    with open(f"best_{level}.txt", "w") as f:
        f.write(str(score))

def play_game():
    print("Pilih Level:\n1. Easy (1-10)\n2. Medium (1-100)\n3. Hard (1-1000)")
    choice = input("Pilihan (1/2/3): ")

    levels = {"1": (10, "easy"), "2": (100, "medium"), "3": (1000, "hard")}
    
    if choice not in levels:
        print("Pilihan tidak valid!")
        return

    max_range, level_name = levels[choice]
    secret_num = random.randint(1, max_range)
    attempts = 0
    best_score = get_best_score(level_name)

    print(f"\n--- Level: {level_name.upper()} ---")
    if best_score != float('inf'):
        print(f"Skor Terbaik: {best_score} tebakan")

    while True:
        try:
            guess = int(input(f"Tebak angka (1-{max_range}): "))
            attempts += 1

            if guess < secret_num:
                print("Terlalu rendah!")
            elif guess > secret_num:
                print("Terlalu tinggi!")
            else:
                print(f"Benar! Anda berhasil dalam {attempts} tebakan.")
                if attempts < best_score:
                    print("Selamat! Anda memecahkan rekor baru!")
                    save_best_score(level_name, attempts)
                break
        except ValueError:
            print("Masukkan angka yang valid!")

if __name__ == "__main__":
    play_game()