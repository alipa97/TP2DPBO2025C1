#include "PetShop.cpp"

class Aksesoris : public PetShop
{
private:
    string jenis, bahan, warna;
    
public:
    Aksesoris()
    {
        this->jenis = "";
        this->bahan = "";
        this->warna = "";
    }

    Aksesoris(string jenis, string bahan, string warna)
    {
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    string get_jenis(){return jenis;}
    string get_bahan(){return bahan;}
    string get_warna(){return warna;}

    void set_jenis(string jenis){this->jenis = jenis;}
    void set_bahan(string bahan){this->bahan = bahan;}
    void set_warna(string warna){this->warna = warna;}

    ~Aksesoris()
    {

    }
};