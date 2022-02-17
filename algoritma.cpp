#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char plaka[10];
    char renk[20];
    int model;
}AracOzellik;

typedef struct
{
    AracOzellik ozellik;
    char girisSaati[20];
}Arac;

typedef struct
{
    Arac araba[1000];
    int aracSayisi;
}Otopark;

Otopark HfttfOtoparki={0};

void AracEkle(Arac a)
{
    HfttfOtoparki.araba[HfttfOtoparki.aracSayisi]=a;
    HfttfOtoparki.aracSayisi++;
}
int main()
{
    Arac a;
    strcpy(a.girisSaati,"11:00:00");
    strcpy(a.ozellik.model, "2016");
    strcpy(a.ozellik.renk, "Beyaz");
    strcpy(a.ozellik.plaka,"35AN222");

    AracEkle(a);

    printf("HfttfOtoparki.araba[0].ozellik.plaka=%s",
           HfttfOtoparki.araba[0].ozellik.plaka);
    return 0;
}
