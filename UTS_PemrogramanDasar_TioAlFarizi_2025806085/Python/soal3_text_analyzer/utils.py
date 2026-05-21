# Fungsi menyimpan laporan
def save_report(filename, result):

    # Membuka file output
    with open(filename, "w", encoding="utf-8") as file:

        # Judul laporan
        file.write("=== LAPORAN ANALISIS TEKS ===\n\n")

        # Menulis jumlah baris
        file.write(f"Jumlah Baris      : {result['baris']}\n")

        # Menulis jumlah kata
        file.write(f"Jumlah Kata       : {result['kata']}\n")

        # Menulis jumlah vokal
        file.write(f"Jumlah Huruf Vokal: {result['vokal']}\n")

        # Menulis jumlah konsonan
        file.write(f"Jumlah Konsonan   : {result['konsonan']}\n\n")

        # Top 5 kata
        file.write("=== TOP 5 KATA ===\n")

        for kata, jumlah in result["top_5"]:

            file.write(f"{kata} : {jumlah}\n")

        # Grafik ASCII
        file.write("\n=== GRAFIK FREKUENSI ===\n")

        for item in result["grafik"]:

            file.write(item + "\n")