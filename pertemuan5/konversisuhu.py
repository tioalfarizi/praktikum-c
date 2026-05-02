def konversi_suhu():
    print("--- Program Konversi Suhu ---")
    print("1. Celsius ke Fahrenheit")
    print("2. Celsius ke Kelvin")
    print("3. Fahrenheit ke Celsius")
    print("4. Kelvin ke Celsius")
    
    pilihan = input("\nPilih jenis konversi (1-4): ")
    
    if pilihan in ['1', '2', '3', '4']:
        suhu = float(input("Masukkan nilai suhu: "))
        
        if pilihan == '1':
            # Rumus: (C * 9/5) + 32
            hasil = (suhu * 9/5) + 32
            print(f"{suhu}°C = {hasil}°F")
        elif pilihan == '2':
            # Rumus: C + 273.15
            hasil = suhu + 273.15
            print(f"{suhu}°C = {hasil} K")
        elif pilihan == '3':
            # Rumus: (F - 32) * 5/9
            hasil = (suhu - 32) * 5/9
            print(f"{suhu}°F = {hasil}°C")
        elif pilihan == '4':
            # Rumus: K - 273.15
            hasil = suhu - 273.15
            print(f"{suhu} K = {hasil}°C")
    else:
        print("Pilihan tidak valid!")

# Menjalankan fungsi
if __name__ == "__main__":
    konversi_suhu()