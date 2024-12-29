/*
// FUNGSI SCANF() DENGAN INT MAIN()

#include <stdio.h>
int main(){ 
    char name[20], address[30];
    printf("nama: ");
    scanf("%s", &name);
    printf("\nalamat:");
    scanf("%s", &address);
    printf("\njadi nama anda adalah %s dan beralamat di %s", name, address);
    return 0;
}
*/

/*
// FUNGSI SCANF() DENGAN VOID MAIN()

#include <stdio.h>
void main() {
    int a,b,c;
    printf("masukkan nilai a: ");
    scanf("%d",&a);
    printf("masukkan nilai b: ");
    scanf("%d",&b);
    c=a-b;
    printf("jadi hasil dari %d dikurang %d adalah %d", a,b,c);
}
*/

/*
// FUNGSI GETS()

#include <stdio.h>
int main(){ 
    char name[20], address[30];
    printf("nama: ");
    gets(name);
    printf("alamat:");
    gets(address);
    printf("jadi nama anda adalah %s dan beralamat di %s", name, address);
    return(0);
}
*/

/*
//FUNGSI FGETS()

#include <stdio.h>
int main(){ 
    char name[20], email[30];
    printf("nama: ");
    fgets(name, sizeof(name), stdin);
    printf("email:");
    fgets(email, sizeof(email), stdin);
    printf("jadi nama anda adalah %s dan beralamat email di %s", name, email);
    return(0);
}
*/

//fungsi gets() tidak disarankan karena bisa buffer overflow, lebih baik gunakan fgets()