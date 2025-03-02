public class Aksesoris extends PetShop {
    private String jenis;
    private String bahan;
    private String warna;
    public Aksesoris() {}
    public Aksesoris(String jenis, String bahan, String warna) {
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    public String get_jenis() {
        return jenis;
    }

    public void set_jenis(String jenis) {
        this.jenis = jenis;
    }

    public String get_bahan() {
        return bahan;
    }

    public void set_bahan(String bahan) {
        this.bahan = bahan;
    }

    public String get_warna() {
        return warna;
    }

    public void set_warna(String warna) {
        this.warna = warna;
    }
}