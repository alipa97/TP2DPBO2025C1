# TP2DPBO2025C1
Saya Alifa Salsabila dengan NIM 2308138 mengerjakan soal Tugas Praktikum 2 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

## Detail Pemrograman
Program ini adalah sebuah aplikasi manajemen produk Petshop yang memungkinkan pengguna untuk mengelola daftar produk. Pengguna dapat menampilkan, menambah, mengedit, dan menghapus produk. Setiap produk memiliki 3 kelas:

### Kelas PetShop
|Atribut|Deskripsi|
|----|-----------|
|nama_produk|Nama dari Produk|
|harga_produk|Harga dari produk|
|stok_produk|Jumlah stok yang tersedia|
|foto_produk|Gambar produk|

Metode:
__construct($nama, $harga, $stok, $foto): Konstruktor untuk menginisialisasi atribut
getNama(), setNama($nama): Mendapatkan dan mengatur nama produk
getHarga(), setHarga($harga): Mendapatkan dan mengatur harga produk
getStok(), setStok($stok): Mendapatkan dan mengatur stok produk
getFoto(), setFoto($foto): Mendapatkan dan mengatur foto produk

Kelas Aksesoris:
|Atribut|Deskripsi|
|----|-----------|
|jenis|Jenis aksesoris (contoh: Baju)|
|bahan|Bahan aksesoris|
|warna|Warna aksesoris|

Metode:
__construct($nama, $harga, $stok, $foto, $jenis, $bahan, $warna): Konstruktor dengan tambahan atribut
getJenis(), setJenis($jenis), getBahan(), setBahan($bahan), getWarna(), setWarna($warna)

Kelas Baju:
|Atribut|Deskripsi|
|----|-----------|
|untuk|Jenis hewan yang memakai baju|
|size|Ukuran baju|
|merk|Merk dari produk baju|

Metode:
__construct($nama, $harga, $stok, $foto, $jenis, $bahan, $warna, $untuk, $size, $merk): Konstruktor dengan tambahan atribut
getUntuk(), setUntuk($untuk), getSize(), setSize($size), getMerk(), setMerk($merk)

## Alur Program
Menampilkan Produk Awal
Program memuat daftar produk awal yang telah ditentukan.
Data produk ini disimpan dalam array dan ditampilkan ke pengguna.
Menambahkan Produk Baru
Pengguna diminta untuk memasukkan detail produk baru (nama, harga, stok, jenis, bahan, warna, ukuran, merk, dan foto produk).
Data produk baru ditambahkan ke dalam array daftar produk.
Menampilkan Semua Produk
Program menampilkan daftar lengkap produk yang telah dimasukkan, termasuk produk awal dan produk baru yang ditambahkan.


## Fitur Utama
Berikut adalah fitur-fitur utama yang tersedia dalam aplikasi ini:
| No | Deskripsi |
|----|-----------|
| 1  | Menampilkan daftar produk dengan ID, nama, harga, stok, foto, jenis, bahan, warna, untuk, size, merk |
| 2  | Pengguna dapat menambahkan produk baru beserta foto. |

## Dokumentasi
*ada didalam masing masing folder berupa video

## Diagram
![Diagram_TP2DPBO2025C1 drawio](https://github.com/user-attachments/assets/29086e89-cabe-4fac-b35c-d10352a73b9a)
