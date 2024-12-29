/*
//PERCABANGAN IF
#include<stdio.h>
void main(){
    printf("== program pembayaran ==\n");
    int total_belanja=0;
    printf("inputkan total belanja: ");
    scanf("%i", &total_belanja);
    //menggunakan blok percabangan
    if( total_belanja > 100000 ){
        printf("selamat, anda mendapatkan hadiah!\n");
    }
    printf("terimakasih sudah berbelanja");
}
*/

/*
//PERCABANGAN IF/ELSE
#include<stdio.h>
void main(){
    //membuat arrat karakter untuk menyimpan password
    char password[30];
    printf("===program login===\n");
    printf("masukkan password: ");
    scanf("%s", &password);
    //percabangan if/else
    if( strcmp(password, "elisa") == 0 ){    //strcmp untuk membandingkan 2 teks(string), akan menghasilkan nilai 0 jika kedua nilai sama.
        printf("selamat datang boss\n");
    } else {
        printf("password salah, coba lagi\n");
    }
    printf("terimakasih sudah menggunakan aplikasi ini");
}
*/

/*
//PERCABANGAN IF/ELSE/IF
#include<stdio.h>
void main(){
    int nilai;
    char grade;
    printf("===program grade nilai===\n");
    printf("masukkan nilai: ");
    scanf("%i", &nilai );
    //menggunakan percabangan if/else/if
    if(nilai >= 90) {
        grade = 'A';
    } else if( nilai >= 80) {
        grade = 'B';
    } else if( nilai >= 70) {
        grade = 'C';
    } else if( nilai >= 60) {
        grade = 'D';
    } else if( nilai >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("nilai: %i\n", nilai);
    printf("grade anda: %c", grade);
}
*/

/*
//PERCABANGAN SWITCH/CASE
#include<stdio.h>
void main(){
    char grade;
    printf("masukkann grade: ");
    scanf("%c", &grade);
    switch (toupper(grade)){     // toupper() untuk mengubah huruf kecil menjadi huruf kapital
        case 'A':
            printf("luar biasaaa\n");
            break;
        case 'B':
        case 'C':
            printf("bagus\n");
            break;
        case 'D':
            printf("anda lulus\n");
            break;
        default:
            printf("grade salah\n");
    }
}
*/

/*
//PERCABANGAN DENGAN OPERATOR TERNARY
#include<stdio.h>
void main(){
    int jawaban;
    printf("berapakah hasil dari 3+4? \n");
    printf("jawab : ");
    scanf("%d", &jawaban);
    printf("jawaban anda : %s\n", ( jawaban==7 ) ? "benar":"salah");
}
*/

/*
//PERCABANGANN BERSARANG (NESTED)
#include<stdio.h>
void main(){
    char username[30], password[30];
    printf("===welcome to awesome program===\n");
    printf("username : ");
    scanf("%s", &username);
    printf("passsword : ");
    scanf("%s", &password);
    if(strcmp(username, "elisaa") == 0){
        if(strcmp(password, "aling") == 0){
            printf("selamat datang bosss\n");
        } 
        else {
            printf("password salah, coba lagi\n");
        }
    } 
    else {
        printf("username dan password anda salah..\n");
    }
}
*/