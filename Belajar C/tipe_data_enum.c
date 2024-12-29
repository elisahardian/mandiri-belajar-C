//enum atau enumeration merupakann tipe data yang berisi sekumpulan konstanta. untuk efisiensi dan fleksibelitas penggunaan memori.

/*
#include<stdio.h>
enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
void main(){
    enum hari sekarang;
    sekarang = RABU;
    printf("sekarang hari ke- %d", sekarang + 1); // ditambah 1 karena, hitungan senin adalah 0
}
*/

/*
#include<stdio.h>
enum boolean {false, true};
void main(){
    int a = 4;
    int b = 5;
    if( a < b == true ){
        printf("variabel a lebih kecil dari b\n");
    }
}
*/

/*
#include<stdio.h>
enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
void main(){
    enum hari sekarang;
    sekarang = RABU;
    printf("ukuran variabel enum : %d bytes\n", sizeof(sekarang));
}
*/