/*
//PERULANGAN FOR (counted loop)
#include<stdio.h>
void main(){
    for(int i = 0; i < 10; i++){
        printf("perulangan ke- %i\n", i);
    }
}

          //contoh lainnya
#include<stdio.h>
void main(){
    for(int counter=4; counter < 20; counter+=2){
        printf("hanya akan ada angka %d\n", counter);
    }
}
*/

/*
//PERULANGAN WHILE
#include<stdio.h>
void main(){
    char ulangi='y';
    int counter=0;
    //perulangan while
    while(ulangi == 'y'){
        printf("apakah kamu mau mengulang?\n");
        printf("jawab (y/t): ");
        scanf(" %c", &ulangi);
        //increment counter
        counter++;
    }
printf("\n\n---------------------\n");
printf("perulangan selesai\n");
printf("kamu mengulang sebanyak %d kali\n", counter);
}
*/

/*
//PERULANGAN DO/WHILE
#include<stdio.h>
void main(){
    char ulangi = 'y';
    int counter = 0;
    do{
        printf("apakah kamu mau mengulang?\n");
        printf("jawab (y/t): ");
        scanf(" %c", &ulangi);
        //increment counter
        counter++;
    } while(ulangi == 'y');
    printf("\n\n-----------\n");
    printf("perulanga selesai\n");
    printf("kamu mengulang sebanyak %d kali\n", counter);
}
*/

/*
//PERULANGAN BERSARANG (NESTED LOOP)
#include<stdio.h>
void main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            printf("perulangan ke (%d, %d)\n", i, j);
        }
    }
}
*/
