#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int hp = 100;
    int parkurUzunluk = 50+rand()% (100 + 1 - 50);
    int engelSayisi = 2+rand()%(5 + 1 - 2);
    int engelMetre[engelSayisi];

    for(int i=0; i<engelSayisi; i++){
        engelMetre[i] = engelSayisi+rand() % (parkurUzunluk + 1 - engelSayisi);
    }

    BirinciEngel(hp,parkurUzunluk,engelMetre);
    return 0;
}

void BirinciEngel(int hp, int parkur, int engel[]){

    printf("Yarisma Basladi !!\n");
    printf("Yarismaci HP: %d\n", hp);
    int i, j, temp;

    //Engel metreyi küçükten büyüðe doðru sýralýyor.
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(engel[j] > engel[j+1]){
                temp = engel[j];
                engel[j] = engel[j+1];
                engel[j+1] = temp;
            }
        }
    }
    printf("Yarismaci %d. metreye kadar bir engelle karsilasmadi.\n", engel[0]);
    

}
