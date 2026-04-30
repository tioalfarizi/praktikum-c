daftar_nilai = []

print("--- Program Input 5 Nilai & Rata-rata ---")

for i in range(1, 6):
    nilai = float(input(f"Masukkan nilai ke-{i}: "))
    daftar_nilai.append(nilai)

rata_rata = sum(daftar_nilai) / len(daftar_nilai)

print("-" * 30)
print(f"List Nilai: {daftar_nilai}")
print(f"Rata-rata : {rata_rata}")