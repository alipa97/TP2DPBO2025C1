import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Baju> dataBaju = new ArrayList<>();
        int idCount = 1;

        String[][] dataAwal = {
            {"Baju Anjing", "100000", "10", "Baju", "Katun", "Merah", "Anjing", "M", "DogWear"},
            {"Kalung Kucing", "50000", "20", "Kalung", "Kulit", "Hitam", "Kucing", "S", "CatStyle"},
            {"Jaket Anjing", "120000", "5", "Jaket", "Denim", "Biru", "Anjing", "L", "DogCozy"},
            {"Sepatu Kucing", "80000", "15", "Sepatu", "Sintetis", "Coklat", "Kucing", "M", "CatStep"},
            {"Kaos Anjing", "90000", "8", "Kaos", "Poliester", "Putih", "Anjing", "XL", "DogFashion"}
        };        

        for (String[] data : dataAwal) {
            Baju baju = new Baju("", "", "");  // Inisialisasi objek kosong
            baju.set_id(idCount);
            baju.set_nama(data[0]);
            baju.set_harga(Integer.parseInt(data[1]));
            baju.set_stok(Integer.parseInt(data[2]));
            baju.set_jenis(data[3]);
            baju.set_bahan(data[4]);
            baju.set_warna(data[5]);
            baju.setUntuk(data[6]);
            baju.setSize(data[7]);
            baju.setMerk(data[8]);
            dataBaju.add(baju);
            idCount++;
        }

        System.out.println("+------------------------+");
        System.out.println("| Daftar Produk Pet Shop |");
        System.out.println("+------------------------+");
        for (Baju baju : dataBaju) {
            System.out.println("ID: " + baju.get_id());
            System.out.println("Nama: " + baju.get_nama());
            System.out.println("Harga: " + baju.get_harga());
            System.out.println("Stok: " + baju.get_stok());
            System.out.println("Jenis: " + baju.get_jenis());
            System.out.println("Bahan: " + baju.get_bahan());
            System.out.println("Warna: " + baju.get_warna());
            System.out.println("Untuk: " + baju.getUntuk());
            System.out.println("Ukuran: " + baju.getSize());
            System.out.println("Merk: " + baju.getMerk());
            System.out.println("----------------------------");
        }

        // Meminta data baru dari user (ADD)
        Scanner scanner = new Scanner(System.in);
        System.out.println("\n== Tambah Produk Baru ==");
        Baju bajuBaru = new Baju("", "", "");
        bajuBaru.set_id(idCount);
        System.out.print("Nama Produk: ");
        bajuBaru.set_nama(scanner.nextLine());
        System.out.print("Harga Produk: ");
        bajuBaru.set_harga(scanner.nextInt());
        System.out.print("Stok Produk: ");
        bajuBaru.set_stok(scanner.nextInt());
        scanner.nextLine(); // Konsumsi newline
        System.out.print("Jenis Aksesoris: ");
        bajuBaru.set_jenis(scanner.nextLine());
        System.out.print("Bahan: ");
        bajuBaru.set_bahan(scanner.nextLine());
        System.out.print("Warna: ");
        bajuBaru.set_warna(scanner.nextLine());
        System.out.print("Untuk (Hewan apa?): ");
        bajuBaru.setUntuk(scanner.nextLine());
        System.out.print("Ukuran: ");
        bajuBaru.setSize(scanner.nextLine());
        System.out.print("Merk: ");
        bajuBaru.setMerk(scanner.nextLine());
        dataBaju.add(bajuBaru);
        System.out.println("== Produk berhasil ditambahkan! ==");

        // Menampilkan semua data (VIEW)
        System.out.println("\n+--------------------------------+");
        System.out.println("| Daftar Produk Setelah Ditambah |");
        System.out.println("+--------------------------------+");
        for (Baju baju : dataBaju) {
            System.out.println("ID: " + baju.get_id());
            System.out.println("Nama: " + baju.get_nama());
            System.out.println("Harga: " + baju.get_harga());
            System.out.println("Stok: " + baju.get_stok());
            System.out.println("Jenis: " + baju.get_jenis());
            System.out.println("Bahan: " + baju.get_bahan());
            System.out.println("Warna: " + baju.get_warna());
            System.out.println("Untuk: " + baju.getUntuk());
            System.out.println("Ukuran: " + baju.getSize());
            System.out.println("Merk: " + baju.getMerk());
            System.out.println("----------------------------");
        }

        System.out.println("\n== Program Selesai ==");
        scanner.close();
    }
}
