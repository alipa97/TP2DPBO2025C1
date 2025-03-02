public class PetShop {
    private int id;
    private String nama_produk;
    private int harga_produk;
    private int stok_produk;

    public PetShop(){}

    public PetShop(int id, String nama_produk, int harga_produk, int stok_produk) {
        this.id = id;
        this.nama_produk = nama_produk;
        this.harga_produk = harga_produk;
        this.stok_produk = stok_produk;
    }

    public int get_id() {
        return id;
    }

    public void set_id(int id) {
        this.id = id;
    }

    public String get_nama() {
        return nama_produk;
    }

    public void set_nama(String nama_produk) {
        this.nama_produk = nama_produk;
    }

    public int get_harga() {
        return harga_produk;
    }

    public void set_harga(int harga_produk) {
        this.harga_produk = harga_produk;
    }

    public int get_stok() {
        return stok_produk;
    }

    public void set_stok(int stok_produk) {
        this.stok_produk = stok_produk;
    }
}