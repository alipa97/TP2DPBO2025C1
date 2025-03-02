<?php
require_once "Baju.php";

// Simpan data baju dalam array
$dataBaju = [];

// Tambahkan data awal
$dataBaju[] = new Baju(1, "Baju Anjing", 100000, 10, "dumb_photo.jpg", "Baju", "Katun", "Merah", "Anjing", "M", "DogWear");
$dataBaju[] = new Baju(2, "Kalung Kucing", 50000, 20, "dumb_photo.jpg", "Kalung", "Kulit", "Hitam", "Kucing", "S", "CatStyle");
$dataBaju[] = new Baju(3, "Jaket Anjing", 120000, 5, "dumb_photo.jpg", "Jaket", "Denim", "Biru", "Anjing", "L", "DogCozy");
$dataBaju[] = new Baju(4, "Sepatu Kucing", 80000, 15, "dumb_photo.jpg", "Sepatu", "Sintetis", "Coklat", "Kucing", "M", "CatStep");
$dataBaju[] = new Baju(5, "Kaos Anjing", 90000, 8, "dumb_photo.jpg", "Kaos", "Poliester", "Putih", "Anjing", "XL", "DogFashion");

// Cek apakah ada form yang dikirimkan
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id = count($dataBaju) + 1;
    $nama = $_POST["nama"];
    $harga = $_POST["harga"];
    $stok = $_POST["stok"];
    $foto_produk = $_FILES["foto_produk"]["name"];
    $jenis = $_POST["jenis"];
    $bahan = $_POST["bahan"];
    $warna = $_POST["warna"];
    $untuk = $_POST["untuk"];
    $size = $_POST["size"];
    $merk = $_POST["merk"];

    // Simpan gambar
    move_uploaded_file($_FILES["foto_produk"]["tmp_name"], "images/" . $foto_produk);

    // Tambahkan ke array
    $dataBaju[] = new Baju($id, $nama, $harga, $stok, $foto_produk, $jenis, $bahan, $warna, $untuk, $size, $merk);

    echo "<p style='color: green;'>Produk berhasil ditambahkan!</p>";
}
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PetShop - Daftar Produk</title>
</head>
<body>

    <h2>Daftar Produk PetShop</h2>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Foto</th>
            <th>Nama</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Ukuran</th>
            <th>Merk</th>
        </tr>
        <?php foreach ($dataBaju as $baju) : ?>
            <tr>
                <td><?= $baju->getId(); ?></td>
                <td><img src="images/<?= $baju->getFotoProduk(); ?>" width="50"></td>
                <td><?= $baju->getNama(); ?></td>
                <td>Rp<?= number_format($baju->getHarga(), 0, ",", "."); ?></td>
                <td><?= $baju->getStok(); ?></td>
                <td><?= $baju->getJenis(); ?></td>
                <td><?= $baju->getBahan(); ?></td>
                <td><?= $baju->getWarna(); ?></td>
                <td><?= $baju->getUntuk(); ?></td>
                <td><?= $baju->getSize(); ?></td>
                <td><?= $baju->getMerk(); ?></td>
            </tr>
        <?php endforeach; ?>
    </table>

    <h2>Tambah Produk Baru</h2>
    <form method="post" enctype="multipart/form-data">
        Nama: <input type="text" name="nama" required><br>
        Harga: <input type="number" name="harga" required><br>
        Stok: <input type="number" name="stok" required><br>
        Foto Produk: <input type="file" name="foto_produk" required><br>
        Jenis: <input type="text" name="jenis" required><br>
        Bahan: <input type="text" name="bahan" required><br>
        Warna: <input type="text" name="warna" required><br>
        Untuk: <input type="text" name="untuk" required><br>
        Ukuran: <input type="text" name="size" required><br>
        Merk: <input type="text" name="merk" required><br>
        <button type="submit">Tambah Produk</button>
    </form>

</body>
</html>
