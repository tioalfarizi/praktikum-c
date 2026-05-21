# Import fungsi analisis
from analyzer import analyze_text

# Import fungsi simpan laporan
from utils import save_report

# Nama file input
input_file = "input.txt"

# Nama file output
output_file = "report.txt"

# Proses analisis teks
result = analyze_text(input_file)

# Simpan hasil analisis
save_report(output_file, result)

# Notifikasi selesai
print("Analisis selesai!")
print("Laporan berhasil dibuat di report.txt")