/*
/ JIKA DATA BERBEDA

#include <stdio.h>
void main(){
    int a=5;
    int b=2;
    float c= a/b;
    printf("hasil dari %d / %d = %.2f ",a,b,c);
// hasilnya akan 2.00, bukan 2.50, karena variable a dan b bertipe integer, makan akaan dibulatkan.
}
*/

/*
// JIKA DATA SAMA

#include <stdio.h>
void main(){
    float a=5;
    float b=2;
    float c= a/b;
    printf("hasil dari %.2f / %.2f = %.2f ",a,b,c);
}
*/

/*
// DATA DIKONVERSI

#include <stdio.h>
void main(){
    int a=5;
    int b=2;
    float c= (float) a / (float) b;
    printf("hasil dari %d / %d = %.2f ",a,b,c);
}
*/

/*
// KONSTANTA MENGGUNAKAN #define

#include <stdio.h>
#define DUAPULUH 20
#define GRAVITASI 9.8
#define VERSI 4.0

void main(){
    printf("isi konstanta duapuluh: %i", DUAPULUH);
    printf("\nisi konstanta gravitasi: %.2f", GRAVITASI);
    printf("\nisi konstanta versi: %.2f", VERSI);
}
*/

/*
//KONSTANTA MENGGUNAKAN const
#include <stdio.h>
 
void main(){
    const double PI=3.14;
    const char JENIS_KELAMIN='P';
    const int VERSI=8;

    printf("isi konstanta PI: %.2f", PI);
    printf("\nisi konstanta jenis kelamin: %c", JENIS_KELAMIN);
    printf("\nisi konstanta versi: %d", VERSI);
}
*/

// jika kita mencoba mengisi nilai lagi pada konstanta, maka akan error.
// UNTUK INTEGER BISA %d ATAU %i.