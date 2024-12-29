//struct atau structure adalah kumpulan dari beberapa variabel dengan beragam tipe data yang dibungkus dalam 1 variabel

/*
#include<stdio.h>
//membuat struct
struct Mahasiswa {
    char *name;
    char *address;
    int age;
};
void main(){
    //meggunakann struct
    struct Mahasiswa mhs1, mhs2;
    //mengisi nilai ke struct
    mhs1.name = "elisa";
    mhs1.address = "rangkas";
    mhs1.age = 18;
    mhs2.name = "aling";
    mhs2.address = "jakarta";
    mhs2.age = 21;

    //mencetak isi struct
    printf(" ## mahasiswa 1 ##\n");
    printf("nama : %s\n", mhs1.name);
    printf("alamat : %s\n", mhs1.address);
    printf("umur : %d\n", mhs1.age);
    printf(" ## mahasiswa 2 ##\n");
    printf("nama : %s\n", mhs2.name);
    printf("alamat : %s\n", mhs2.address);
    printf("umur : %d\n", mhs2.age);
}
*/

/*
//MENGGUNAKAN typedef PADA STRUCT
// bentukannya kyk gini cuma gatau gimana cara nambahin datanya biar bisa di printf jalan.

#include<Stdio.h>
//membuat struct
typedef struct Distance{
    int feet;
    float inch;
} distance;
void main(){
    //menggunakan struct
    distance dist1, dist2, sum;
}
*/


/*
//PASSING STRUCT KEDALAM FUNGSI
#include<stdio.h>
struct student
{
    char name[50];
    int age;
};
void main(){
    struct student s1;
    printf("enter name : ");
    scanf("%[^\n]%*c", s1.name);
    printf("enter age : ");
    scanf("%d", &s1.age);
    display(s1); //passing structure as an argument
}
//membuat fungsi dengan struct sebagai parameter
void display(struct student s){
    printf("\ndisplaying information\n");
    printf("name : %s", s.name);
    printf("\nroll : %d", s.age);
}
*/