class PetShop:
    def __init__(self, id, nama_produk, harga_produk, stok_produk):
        self.__id=id
        self.__nama_produk=nama_produk
        self.__harga_produk=harga_produk
        self.__stok_produk=stok_produk

    def get_id(self): return self.__id
    def set_id(self, id): self.__id = id

    def get_nama(self): return self.__nama_produk
    def set_nama(self, nama_produk): self.__nama_produk=nama_produk

    def get_harga(self): return self.__harga_produk
    def set_harga(self, harga_produk): self.__harga_produk=harga_produk

    def get_stok(self): return self.__stok_produk
    def set_stok(self, stok_produk): self.__stok_produk=stok_produk