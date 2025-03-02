from Baju import Baju

data_baju = []
id_count = 1

data_awal = [
    {"nama": "Baju Anjing Merah", "harga": 50000, "stok": 10, "jenis": "Baju", "bahan": "Katun", "warna": "Merah", "untuk": "Anjing", "size": "M", "merk": "DogWear"},
    {"nama": "Baju Kucing Biru", "harga": 45000, "stok": 8, "jenis": "Baju", "bahan": "Denim", "warna": "Biru", "untuk": "Kucing", "size": "S", "merk": "CatStyle"},
    {"nama": "Baju Hamster Polkadot", "harga": 30000, "stok": 15, "jenis": "Baju", "bahan": "Sutra", "warna": "Polkadot", "untuk": "Hamster", "size": "XS", "merk": "FurryFit"},
    {"nama": "Baju Anjing Hitam", "harga": 55000, "stok": 12, "jenis": "Baju", "bahan": "Fleece", "warna": "Hitam", "untuk": "Anjing", "size": "L", "merk": "PetElite"},
    {"nama": "Baju Kelinci Hijau", "harga": 40000, "stok": 9, "jenis": "Baju", "bahan": "Rajut", "warna": "Hijau", "untuk": "Kelinci", "size": "M", "merk": "BunnyDress"}
]

for data in data_awal:
    baju = Baju("", "", "")  # Inisialisasi objek kosong
    baju.set_id(id_count)
    baju.set_nama(data["nama"])
    baju.set_harga(data["harga"])
    baju.set_stok(data["stok"])
    baju.set_jenis(data["jenis"])
    baju.set_bahan(data["bahan"])
    baju.set_warna(data["warna"])
    baju.set_untuk(data["untuk"])
    baju.set_size(data["size"])
    baju.set_merk(data["merk"])
    data_baju.append(baju)
    id_count += 1

print("+------------------------+")
print("| Daftar Produk Pet Shop |")
print("+------------------------+")
for baju in data_baju:
    print(f"ID: {baju.get_id()}")
    print(f"Nama: {baju.get_nama()}")
    print(f"Harga: {baju.get_harga()}")
    print(f"Stok: {baju.get_stok()}")
    print(f"Jenis: {baju.get_jenis()}")
    print(f"Bahan: {baju.get_bahan()}")
    print(f"Warna: {baju.get_warna()}")
    print(f"Untuk: {baju.get_untuk()}")
    print(f"Ukuran: {baju.get_size()}")
    print(f"Merk: {baju.get_merk()}")
    print("----------------------------")

# meminta data baru dari user (ADD)
print("\n== Tambah Produk Baru ==")
baju_baru = Baju("", "", "")
baju_baru.set_id(id_count)
baju_baru.set_nama(input("Nama Produk: "))
baju_baru.set_harga(int(input("Harga Produk: ")))
baju_baru.set_stok(int(input("Stok Produk: ")))
baju_baru.set_jenis(input("Jenis Aksesoris: "))
baju_baru.set_bahan(input("Bahan: "))
baju_baru.set_warna(input("Warna: "))
baju_baru.set_untuk(input("Untuk (Hewan apa?): "))
baju_baru.set_size(input("Ukuran: "))
baju_baru.set_merk(input("Merk: "))
data_baju.append(baju_baru)
print("== Produk berhasil ditambahkan! ==")

# Menampilkan semua data (VIEW)
print("\n+--------------------------------+")
print("| Daftar Produk Setelah Ditambah |")
print("+--------------------------------+")
for baju in data_baju:
    print(f"ID: {baju.get_id()}")
    print(f"Nama: {baju.get_nama()}")
    print(f"Harga: {baju.get_harga()}")
    print(f"Stok: {baju.get_stok()}")
    print(f"Jenis: {baju.get_jenis()}")
    print(f"Bahan: {baju.get_bahan()}")
    print(f"Warna: {baju.get_warna()}")
    print(f"Untuk: {baju.get_untuk()}")
    print(f"Ukuran: {baju.get_size()}")
    print(f"Merk: {baju.get_merk()}")
    print("----------------------------")

print("\n== Program Selesai ==")