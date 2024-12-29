/*
#include<Stdio.h>
//membuat fungsi say_hello()
void say_hello(){
    printf("hello selamat datang!\n");
}
void main(){
    //memanggil fungsi say_hello()
    say_hello();
    say_hello();
    say_hello();
}
*/

/*
//FUNGSI DENGAN PARAMETER
#include<stdio.h>
void say_hello(char name[]){
    printf("hello %s\n", name);
}
void main(){
    say_hello("Elisa");
    say_hello("algg");
    say_hello("semuaa");
}
*/
/*
#include<Stdio.h>
void add(int a, int b){
    printf("%d + %d = %d\n", a, b, a+b);
}
void main(){
    add(1,4);
    add(8,2);
    add(3,2);
}
*/

/*
//FUNGSI YANG MENGEMBALIKAN NILAI
#include<stdio.h>
float bagi(int a, int b){
    float hasil = (float)a / (float)b;
    return hasil;
}
void main(){
    printf("hasil 5 dibagi 2 adalah %.2f", bagi(5,2));
}
*/

/*
//FUNGSI REKURSIF
#include <stdio.h>
int sum(int n);
void main(){
    int number, result;
    printf("enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
}
int sum(int num){
    if (num!=0)
        return num + sum(num-1); //fungsi sum memanggil dirinya sendiri
    else
        return num;
}
*/

//VARIABEL LOKAL DAN VARIABEL GLOBAL
/*
#include<stdio.h>
//membuat variable global
int nilai = 9;
void main(){
    //membuat variable lokal
    int nilai = 7;
    //mencetak variable
    printf("nilai : %d\n", nilai);
}
*
/*
#include<stdio.h>
//membuat variable global
int nilai = 9;
void main(){
    //mencetak variable
    printf("nilai : %d\n", nilai);
}
*/

//PASS BY VALUE DAN PASS BY REFERENCE (untuk memberikan nilai paa parameter)

//contoh pass by value --> kali_dua(4);
//contoh pass by reference --> kali_dua(&nama_variabel);

/*
#include<stdio.h>
void kali_dua(int *num){
    *num = *num * 2;
}
void main(){
    int angka=9;
    //memanggil fungsi
    kali_dua(&angka);
    //menvetak isi variable
    //setelah fungsi dipanggil
    printf("isi variable angka = %d\n", angka);
}
*/
