from colorama import init, Fore
from game import play_game
from scoreboard import save_score, show_top_scores

init(autoreset=True)

print(Fore.CYAN + "=== GUESS BATTLE GAME ===")

player_name = input("Masukkan nama pemain: ")

print("\nPilih Level")
print("1. Easy")
print("2. Medium")
print("3. Hard")

try:
    level = int(input("Pilih level: "))

    score = play_game(level)

    save_score(player_name, score)

    show_top_scores()

except ValueError:
    print(Fore.RED + "Input harus angka!")