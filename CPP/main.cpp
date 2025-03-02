#include <list>
#include "Baju.cpp"

int main() {
    list<Baju> list_baju;
    int id_count = 1, harga_produk, stok_produk;
    string nama_produk, jenis, bahan, warna, untuk, size, merk;
    
    // Data produk awal
    string nama_produk_awal[] = {"Baju Anjing", "Kalung Kucing", "Jaket Anjing", "Sepatu Kucing", "Kaos Anjing"};
    int harga_produk_awal[] = {100000, 50000, 120000, 80000, 90000};
    int stok_produk_awal[] = {10, 20, 5, 15, 8};
    string jenis_awal[] = {"Baju", "Kalung", "Jaket", "Sepatu", "Kaos"};
    string bahan_awal[] = {"Katun", "Kulit", "Denim", "Sintetis", "Poliester"};
    string warna_awal[] = {"Merah", "Hitam", "Biru", "Coklat", "Putih"};
    string untuk_awal[] = {"Anjing", "Kucing", "Anjing", "Kucing", "Anjing"};
    string size_awal[] = {"M", "S", "L", "M", "XL"};
    string merk_awal[] = {"DogWear", "CatStyle", "DogCozy", "CatStep", "DogFashion"};

    for (int i = 0; i < 5; i++) {
        Baju data;
        data.set_id(id_count);
        data.set_nama(nama_produk_awal[i]);
        data.set_harga(harga_produk_awal[i]);
        data.set_stok(stok_produk_awal[i]);
        data.set_jenis(jenis_awal[i]);
        data.set_bahan(bahan_awal[i]);
        data.set_warna(warna_awal[i]);
        data.set_untuk(untuk_awal[i]);
        data.set_size(size_awal[i]);
        data.set_merk(merk_awal[i]);

        list_baju.push_back(data);
        id_count++;
    }

    // Menampilkan daftar produk awal
    cout << "\n+------------------------+\n";
    cout << "| Daftar Produk Pet Shop |\n";
    cout << "+------------------------+\n";
    for (auto &baju : list_baju) {
        cout << "ID: " << baju.get_id() << "\n";
        cout << "Nama Produk: " << baju.get_nama() << "\n";
        cout << "Harga: " << baju.get_harga() << "\n";
        cout << "Stok: " << baju.get_stok() << "\n";
        cout << "Jenis: " << baju.get_jenis() << "\n";
        cout << "Bahan: " << baju.get_bahan() << "\n";
        cout << "Warna: " << baju.get_warna() << "\n";
        cout << "Untuk: " << baju.get_untuk() << "\n";
        cout << "Size: " << baju.get_size() << "\n";
        cout << "Merk: " << baju.get_merk() << "\n";
        cout << "----------------------------\n";
    }

    // Meminta satu data baru dari user
    cout << "\n== Tambah Produk Baru ==\n";

    cout << "Nama Produk: ";
    // cin.ignore();
    getline(cin, nama_produk);
    cout << "Harga: ";
    cin >> harga_produk;
    cout << "Stok: ";
    cin >> stok_produk;
    cin.ignore();
    cout << "Jenis: ";
    getline(cin, jenis);
    cout << "Bahan: ";
    getline(cin, bahan);
    cout << "Warna: ";
    getline(cin, warna);
    cout << "Untuk: ";
    getline(cin, untuk);
    cout << "Size: ";
    getline(cin, size);
    cout << "Merk: ";
    getline(cin, merk);

    // Menambahkan produk baru ke list
    Baju new_baju;
    new_baju.set_id(id_count);
    new_baju.set_nama(nama_produk);
    new_baju.set_harga(harga_produk);
    new_baju.set_stok(stok_produk);
    new_baju.set_jenis(jenis);
    new_baju.set_bahan(bahan);
    new_baju.set_warna(warna);
    new_baju.set_untuk(untuk);
    new_baju.set_size(size);
    new_baju.set_merk(merk);

    list_baju.push_back(new_baju);
    cout << "== Produk berhasil ditambahkan! ==\n";

    // Menampilkan daftar produk setelah penambahan
    cout << "\n+--------------------------------+\n";
    cout << "| Daftar Produk Setelah Ditambah |\n";
    cout << "+--------------------------------+\n";
    for (auto &baju : list_baju) {
        cout << "ID: " << baju.get_id() << "\n";
        cout << "Nama Produk: " << baju.get_nama() << "\n";
        cout << "Harga: " << baju.get_harga() << "\n";
        cout << "Stok: " << baju.get_stok() << "\n";
        cout << "Jenis: " << baju.get_jenis() << "\n";
        cout << "Bahan: " << baju.get_bahan() << "\n";
        cout << "Warna: " << baju.get_warna() << "\n";
        cout << "Untuk: " << baju.get_untuk() << "\n";
        cout << "Size: " << baju.get_size() << "\n";
        cout << "Merk: " << baju.get_merk() << "\n";
        cout << "----------------------------\n";
    }
    
    cout << "\n== Program Selesai ==\n";
    return 0;
}
