#include <stdio.h>
//ini comment, tidak akan terproses di output.
/*
#include untuk mengimpor fungsi yang sudah didefinisikan pada header file.
contoh kita mengimpor file stdio.h untuk membuat program bahasa c sehingga kita bisa menggunakan printf dan scanf.
main adalah fungsi utama program, maksud dari int didepan main adalah tipe data yang akan dikembalikan, lalu wajib sertakan return 0.
return 0 maksudnya main akan mengembalikan nilai 0 setelah selesai.
bisa menggunakan void didepan main, maka tidak usah tambahkan return di akhir.
*/

int main (){
    printf("hello world!\n\n");
    printf("hello nama saya %s\n", "elisa");
    printf("umur saya %d\n", 18);
    return 0;
}

// %s untuk string, %d untuk integer atau bil bulat, %c untuk karakter, %f untuk float atau bil desimal, \n untuk membuat baris baru.

//ada juga fungsi puts() sama seperti printf() namun puts() tidak perlu menambahkan \n untuk membuat baris baru. otomatis akan membuat baris baru.