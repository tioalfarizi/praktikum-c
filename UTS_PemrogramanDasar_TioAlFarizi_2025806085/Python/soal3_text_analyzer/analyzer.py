# Library Counter untuk menghitung kata
from collections import Counter


# Fungsi analisis teks
def analyze_text(filename):

    # Membuka file input
    with open(filename, "r", encoding="utf-8") as file:

        # Membaca seluruh isi file
        text = file.read()

    # Menghitung jumlah baris
    lines = text.splitlines()

    # Mengubah teks menjadi huruf kecil lalu split kata
    words = text.lower().split()

    # Jumlah baris
    jumlah_baris = len(lines)

    # Jumlah kata
    jumlah_kata = len(words)

    # Menghitung frekuensi kata
    counter = Counter(words)

    # Mengambil 5 kata paling sering muncul
    top_5 = counter.most_common(5)

    # Huruf vokal
    vokal = "aiueo"

    # Variabel hitung vokal dan konsonan
    jumlah_vokal = 0
    jumlah_konsonan = 0

    # Loop setiap karakter
    for char in text.lower():

        # Jika huruf alfabet
        if char.isalpha():

            # Jika huruf vokal
            if char in vokal:
                jumlah_vokal += 1

            # Jika konsonan
            else:
                jumlah_konsonan += 1

    # List grafik ASCII
    grafik = []

    # Membuat grafik frekuensi
    for kata, jumlah in top_5:

        grafik.append(f"{kata} {'#' * jumlah}")

    # Mengembalikan hasil analisis
    return {
        "baris": jumlah_baris,
        "kata": jumlah_kata,
        "top_5": top_5,
        "vokal": jumlah_vokal,
        "konsonan": jumlah_konsonan,
        "grafik": grafik
    }