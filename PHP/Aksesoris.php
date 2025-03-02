<?php
require_once "PetShop.php";

class Aksesoris extends PetShop {
    protected $jenis;
    protected $bahan;
    protected $warna;

    public function __construct($id, $nama, $harga, $stok, $foto_produk, $jenis, $bahan, $warna) {
        parent::__construct($id, $nama, $harga, $stok, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function getJenis() { return $this->jenis; }
    public function getBahan() { return $this->bahan; }
    public function getWarna() { return $this->warna; }
}
?>
