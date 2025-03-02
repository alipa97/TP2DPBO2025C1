#include "Aksesoris.cpp"

class Baju : public Aksesoris
{
private:
    string untuk, size, merk;

public:
    Baju(){
        this->untuk = "";
        this->size = "";
        this->merk = "";
    }

    Baju(string untuk, string size, string merk){
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;
    }

    string get_untuk(){return untuk;}
    string get_size(){return size;}
    string get_merk(){return merk;}

    void set_untuk(string untuk){this->untuk = untuk;}
    void set_size(string size){this->size = size;}
    void set_merk(string merk){this->merk = merk;}
    
    ~Baju(){

    }
};