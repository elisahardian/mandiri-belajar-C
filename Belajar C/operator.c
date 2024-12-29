/*
Jenis-jenis operator 
1. Operator Aritmatika (+,-,*,/,%)
2. Operator Penugasan
3. Operator Pembanding 
4. Operator Logika (AND, OR, Negasi)
5. Operator Bitwise, dll
*/

/*
//OPERATOR ARITMATIKA
#include <stdio.h>
void main(){
    int a,b,c;
    printf("masukkan nilai a: ");
    scanf("%i",&a);
    printf("masukkan nilai b: ");
    scanf("%i",&b);
    printf("hasil dari %i + %i = %i \n", a,b, a + b );
    printf("hasil dari %i - %i = %i \n", a,b, a - b );
    printf("hasil dari %i * %i = %i \n", a,b, a * b );
    printf("hasil dari %i / %i = %i \n", a,b, a / b );
    printf("hasil dari %i mod %i = %i \n", a,b, a % b );
}
*/

/*
//OPERATOR PENUGASAN
#include<stdio.h>
void main(){
    int a,b;
    //pengisian nilai dengan operator =
    a=5;
    b=10;
    //pengisian sekaligus penambahan
    b+=a; // sama seperti b=b+a
    printf("hasil b += a adalah %d\n",b);
    b-=a; // sama seperti b=b-a
    printf("hasil b -= a adalah %d\n",b);
    b*=a; // sama seperti b=b*a
    printf("hasil b *= a adalah %d\n",b);
    b/=a; // sama seperti b=b/a
    printf("hasil b /= a adalah %d\n",b);
    b%=a; // sama seperti b=b%a
    printf("hasil b %= a adalah %d\n",b);
}
*/

/*
//OPERASI PEMBANDING
//nilai yang akan dihasilkan adalah 1 (TRUE) atau 0 (FALSE)
#include<stdio.h>
void main(){
    int a=4;
    int b=3;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("a > b = %d\n", a>b); //lebih besar
    printf("a < b = %d\n", a<b); //lebihkecil
    printf("a >= b = %d\n", a>=b); //lebih besar sama dengan
    printf("a <= b = %d\n", a<=b); //lebih kecil sama dengan
    printf("a == b = %d\n", a==b); //sama dengan
    printf("a != b = %d\n", a!=b); //tidak sama dengan
}
*/

/*
//OPERASI LOGIKA
//and= keduanya true maka logika and akan true, satu false maka logika and akan false
//or= keduanya atau salah satunya true maka logika or akan true, jika keduanya false maka logika or akan false
//not/negasi/kebalikan= salah satunya harus true dan false makan logika negasi akan true, jika keduanya sama maka akan false
#include<stdio.h>
void main(){
    int a=1; //TRUE
    int b=0; //FALSE
    //logika AND (&&)
    printf("a && b= %d\n", a&&b);
    //logika OR (||)
    printf("a || b= %d\n", a||b);
    //logika NOT (!)
    printf("!a = %d\n", !a);
    printf("!b = %d\n"), !b; // ALG BINGUNG, KOK INI HASILNYA B=0 JUGA, BUKANNYA KEBALIKAN JADI B=1 ?
}
*/

/*
//OPERATOR BITWISE

//Bitwise AND (&)
#include<stdio.h>
void main(){
    int a=6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    int b=3; // 3 angka binernya 0011 = (2 pangkat 3)*0 + (2 pangkat 2)*0 + (2 pangkat 1)*1 + (2 pangkat 0)*1 = 3
    printf("a & b = %d\n", a & b);
    // hasilnya akan 2, karena 0110 dan 0011 akan menjadi 0010 = (2 pangkat 3)*0 + (2 pangkat 2)*0 + (2 pangkat 1)*1 + (2 pangkat 0)*0 =2
    // 0110 dan 0010, jadi diambil letak yg dua duanya ada 1 
}

//Bitwise OR (|)
#include <stdio.h>
void main(){
    int a =6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    int b =3; // 3 angka binernya 0011 = (2 pangkat 3)*0 + (2 pangkat 2)*0 + (2 pangkat 1)*1 + (2 pangkat 0)*1 = 3
    printf("a | b = %d\n", a | b);
    // hasilnya akan 7, karena 0110 atau 0011 akan menjadi 0111 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*1 = 7 
    // 0110 atau 0010, jadi diambil semua yang ada angka 1 nya
}

//Bitwise XOR (^)
#include <stdio.h>
void main(){
    int a =6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    int b =3; // 3 angka binernya 0011 = (2 pangkat 3)*0 + (2 pangkat 2)*0 + (2 pangkat 1)*1 + (2 pangkat 0)*1 = 3
    printf("a ^ b = %d\n", a ^ b);
    // hasilnya akan 5, karena 0110 xor 0011 akan menjadi 0101 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*0 + (2 pangkat 0)*1 = 5 
    // 0110 xor 0010, jadi akan menghasilkan nilai 1 jika kedua nilai tidak sama
}

//Bitwise NOT/komplemen (~)
#include <stdio.h>
void main(){
    int a =6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    printf("~a = %d\n", ~a);
    // hasilnya akan -7, karena 0110 akan menjadi 1001 = (2 pangkat 3)*-1 + (2 pangkat 2)*0 + (2 pangkat 1)*0 + (2 pangkat 0)*1 = -7 
    // 0110, akan menghasikan nilai yang terbalik dari biner aslinya
    // khusus di NOT, biner ada 4 angka 0000 angka yang paling pertama akan menghasilkan nilai -
}

//Bitwise left shift (<<)
#include <stdio.h>
void main (){
    int a=6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    printf("a << 1 = %d\n", a << 1);
    // hasilnya akan 12, karena yang tadinya 0110 akan digeser ke kiri 1 kali, menjadi 1100 
    // 1100 = (2 pangkat 3)*1 + (2 pangkat 2)*1 + (2 pangkat 1)*0 + (2 pangkat 0)*0 = 12
}

//Bitwise right shift (>>)
#include <stdio.h>
void main (){
    int a=6; // 6 angka binernya 0110 = (2 pangkat 3)*0 + (2 pangkat 2)*1 + (2 pangkat 1)*1 + (2 pangkat 0)*0 = 6
    printf("a >> 1 = %d\n", a >> 1);
    // hasilnya akan 3, karena yang tadinya 0110 akan digeser ke kanan 1 kali, menjadi 0011 
    // 0011 = (2 pangkat 3)*0 + (2 pangkat 2)*0 + (2 pangkat 1)*1 + (2 pangkat 0)*1 = 3
}
*/

/*
//OPERATOR ALAMAT MEMORI DAN POINTER
#include <stdio.h>
void main(){
    //membuat pointer menggunakan *
    int *a= 5;
    //ambil alamat memori dari pointer a
    printf("alamat memori variabel a adalah %x\n", &a);
}
*/

/*
//OPERATOR TERNARY
#include <stdio.h>
void main(){
    int a= 4;
    printf("a > 1 adalah %s", a > 1 ? "benar" : "salah");
} 
*/

/*
//OPERATOR INCREMENT DAN DECREMENT
#include<stdio.h>
void main(){
    int a=4;
    //increment a
    a++;
    printf("a++ = %d\n", a); //hasilnya akan 5 karena 4+1=5
    //increment a
    ++a;
    printf("++a = %d\n", a); //hasilnya akan 6 karena 1+5=6
    //decrement a
    a--;
    printf("a-- = %d\n", a); //hasilnya akan 5 karena 6-1=5
    //decrement a
    --a;
    printf("--a = %d\n", a); //hasilnya akan 4 karena -1+5=4
}
*/
