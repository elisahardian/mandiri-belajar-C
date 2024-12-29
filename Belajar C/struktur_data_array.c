/*
#include<stdio.h>
void main(){
    char huruf[5] = { 'a', 'b', 'c', 'd', 'e'};
    printf("huruf ke 3 : %c\n", huruf[2]);
}
*/

/*
#include<stdio.h>
void main(){
    //isi awal array
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
    //mengubah isi array
    huruf[2] = 'z';
    //mencetak isi array
    printf("huruf: %c", huruf[2]);
}
*/

/*
#include<stdio.h>
void main(){
    //membuat array kosong
    int nilai[5];
    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;
    //membuat isi array
    printf("nilai ke-1: %d\n", nilai[0]);
    printf("nilai ke-2: %d\n", nilai[1]);
    printf("nilai ke-3: %d\n", nilai[2]);
    printf("nilai ke-4: %d\n", nilai[3]);
    printf("nilai ke-5: %d\n", nilai[4]);
}
*/

/*
#include<stdio.h>
void main(){
    //membuat array kosong
    int nilai[5];
    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;
    //mencetak isi array dengan perulangan
    for(int i = 0; i < 5; i++){
        printf("nilai ke-1: %d\n", nilai[i]);
    }
}
*/

/*
//MENGAMBIL PANJANG ARRAY
#include <stdio.h>
void main(){
    //membuat array
    int nilai[5]={33, 22, 11, 44, 21};
    //mengambil banyaknya isi array
    int length= sizeof(nilai)/sizeof(*nilai);
    printf("banyaknya isi array nilai: %d\n", length);
}
*/

/*
//CONTOH PROGRAM HITUNG RATA-RATA
#include <stdio.h>
void main(){
    //membuat array dari tinggi badan
    int tinggi_badan[10]= {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    int length= sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += tinggi_badan[i];
    }
    //rata rata tinggi badan
    float rata_rata= (float)sum / (float)length;
    printf("rata rata tinggi badan: %.2f\n", rata_rata);
}
*/

/*
//ARRAY MULTI DIMENSI
#include<stdio.h>
void main(){
    int matriks[3][3]={
        {1, 3, 5}, //kesamping kiri kanan, baris ke 0
        {5, 7, 4}, //kesamping kiri kanan, baris ke 1
        {6, 2, 9} //kesamping kiri kanan, baris ke 2
    };
    printf("isi data pada indeks ke-(1,0): %d\n", matriks[1][0]); //(baris, kolom) baris ke 1, kolom ke 0
    printf("isi data pada indeks ke-(0,1): %d\n", matriks[0][1]);
    printf("isi data pada indeks ke-(1,1): %d\n", matriks[1][1]);
    printf("isi data pada indeks ke-(2,1): %d\n", matriks[2][1]);
}
*/
