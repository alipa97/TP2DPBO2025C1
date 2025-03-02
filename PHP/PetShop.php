<?php
class PetShop {
    protected $id;
    protected $nama;
    protected $harga;
    protected $stok;
    protected $foto_produk;

    public function __construct($id, $nama, $harga, $stok, $foto_produk) {
        $this->id = $id;
        $this->nama = $nama;
        $this->harga = $harga;
        $this->stok = $stok;
        $this->foto_produk = $foto_produk;
    }

    public function getId() { return $this->id; }
    public function getNama() { return $this->nama; }
    public function getHarga() { return $this->harga; }
    public function getStok() { return $this->stok; }
    public function getFotoProduk() { return $this->foto_produk; }
}
?>
