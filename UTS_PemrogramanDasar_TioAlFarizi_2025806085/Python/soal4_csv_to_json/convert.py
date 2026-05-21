# Import library CSV
import csv

# Import library JSON
import json

# List untuk menyimpan data
data = []

# Variabel total nilai
total = 0

# Jumlah mahasiswa
jumlah = 0

# Membuka file CSV
with open("data_mahasiswa.csv", "r") as file:

    # Membaca file CSV
    reader = csv.DictReader(file)

    print("=== DATA MAHASISWA ===\n")

    # Loop setiap data
    for row in reader:

        # Menampilkan data
        print(f"Nama         : {row['nama']}")
        print(f"NIM          : {row['nim']}")
        print(f"Nilai Akhir  : {row['nilai_akhir']}")
        print(f"Mutu         : {row['mutu']}")
        print("--------------------------")

        # Menjumlahkan nilai akhir
        total += float(row["nilai_akhir"])

        # Menambah jumlah mahasiswa
        jumlah += 1

        # Menyimpan data ke list
        data.append({

            "nama": row["nama"],
            "nim": row["nim"],
            "nilai_akhir": float(row["nilai_akhir"]),
            "mutu": row["mutu"]

        })

# Menghitung rata-rata
rata_rata = total / jumlah

# Menampilkan rata-rata
print(f"\nRata-rata nilai akhir: {rata_rata:.2f}")

# Membuka file JSON
with open("data_mahasiswa.json", "w") as json_file:

    # Menyimpan data JSON
    json.dump(data, json_file, indent=4)

print("\nKonversi CSV ke JSON berhasil!")