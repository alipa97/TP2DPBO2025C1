#include <iostream>
// #include <string>
using namespace std;

class PetShop {
    private:
        int id, harga_produk, stok_produk;
        string nama_produk;

    public:
        PetShop(){
            this->id = 0;
            this->nama_produk = "";
            this->harga_produk = 0;
            this->stok_produk = 0;
        }

        PetShop(int id, string nama_produk, int harga_produk, int stok_produk)
        {
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }

        // Getter dan Setter
        int get_id()
        {
            return id; 
        }

        string get_nama()
        {
            return nama_produk;
        }

        int get_harga()
        {
            return harga_produk;
        }

        int get_stok()
        {
            return stok_produk;
        }

        void set_id(int id)
        {
            this->id = id;
        }
        
        void set_nama(string nama_produk)
        {
            this->nama_produk = nama_produk;
        }

        void set_harga(int harga_produk)
        {
            this->harga_produk = harga_produk;
        }

        void set_stok(int stok_produk)
        {
            this->stok_produk = stok_produk;
        }

        ~PetShop()
        {

        }
};