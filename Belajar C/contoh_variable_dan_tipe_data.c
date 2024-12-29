/*
//CONTOH VARIABLE

#include<stdio.h>
int main(){
    int berat; // membuat variable dengan tipe data integer
    int tinggi = 164; // membuat variable dan langsung mengisinya
    berat = 58; // mengisi nilai ke variable
    printf(" berat badan saya adalah %d kg dan tinggi badan saya adalah %d cm.", berat, tinggi);
    return 0;
}
*/

/*
TIPE DATA PADA C

1. DASAR (CHAR : berisi 1 huruf atau 1 karakter, INT : data berupa angka, FLOAT : data berupa bilangan pecahan, 
          DOUBLE : sama seperti float namun memiliki data penyimpanan lebih besar)
2. TURUNAN (ARRAY, STRUCTUR, POINTER)
3. ENUM (BENTUKAN)
4. VOID 
*/

/*
// CONTOH TIPE DATA

#include<stdio.h>
int main(){
    int usia=18;
    float berat= 59.8;
    double tinggi= 164.88;
    char jenis_kelamin= 'p';
    printf("usia %i tahun dengan berat badan %.2f cm dan tinggi %.2f kg yang berjenis kelamin %c. ", usia, berat, tinggi, jenis_kelamin);
    return 0;
}
*/

//penulisan angka koma yang biasanya ditulis 3,4 harus ditulis 3.4 agar tidak error.
//penulisan %.2f untuk menentukan batas jumlah angka setelah tanda koma (contohnya yaitu 2 angka).
//void adalah tipe data khusus untuk menyatakan tidak ada data, pada fungsi main() artinya fungsi tidak akan mengembalikan nilai apapun. 
//void tidak sama dengan 0 dan tidak sama dengan null.
