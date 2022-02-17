#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
	int i;
    int hp = 100;
    int parkurUzunluk = 50+rand()% (100 + 1 - 50);
    int engelSayisi = 2+rand()%(5 + 1 - 2);
    int engelMetre[engelSayisi];

    for(i=0; i<engelSayisi; i++){
        engelMetre[i] = engelSayisi+rand() % (parkurUzunluk + 1 - engelSayisi);
    }

    Engeller(hp,parkurUzunluk,engelMetre, engelSayisi);
    getch();
    return 0;
}

void Engeller(int hp, int parkur, int engel[], int sayi){

    printf("Yarisma Basladi !!\n");
    printf("Yarismaci HP: %d\n", hp);
    FILE*fp=fopen("log.txt","a");
	
	    fprintf(fp,"Yarisma Basladi !!\nYarismaci HP: %d\n",hp);
	
	    
    int i, j, temp, sayac = 0;

    //Engel metreyi küçükten büyüðe doðru sýralýyor.
    for(i=0; i<sayi; i++){
        for(j=0; j<sayi-1; j++){
            if(engel[j] > engel[j+1]){
                temp = engel[j];
                engel[j] = engel[j+1];
                engel[j+1] = temp;
            }
        }
    }

    for(j=0; j<sayi; j++){
        printf("Yarismaci %d. metreye kadar bir engelle karsilasmadi.\n", engel[j]);
        fprintf(fp,"Yarismaci %d. metreye kadar bir engelle karsilasmadi.\n",engel[j]);
        sayac = 0;
        for(i=2; i<=hp; i++){
            if(hp % i == 0 && engel[j] % i == 0){
            sayac++;
            }
        }
        if(sayac > 0){
            printf("%d. metrede bir engel var. %d ve %d aralarinda asal degildir.\n",engel[j],hp,engel[j]);
            printf("Yarismaci HP: %d\n",hp);
            fprintf(fp,"%d. metrede bir engel var. %d ve %d aralarinda asal degildir.\n",engel[j],hp,engel[j]);
            fprintf(fp,"Yarismaci HP: %d\n",hp);
        }
        else{
            printf("%d. metrede bir engel var. %d ve %d aralarinda asaldir.\n",engel[j],hp,engel[j]);
			fprintf(fp,"%d. metrede bir engel var. %d ve %d aralarinda asaldir.\n",engel[j],hp,engel[j]);
            hp-=engel[j];
            printf("Yarismaci HP: %d\n",hp);
			fprintf(fp,"Yarismaci HP: %d\n",hp);        
		}
        if(hp <= 0){
            printf("Uzgunum !!! Yarismayi Tamamlayamadin.\n");
            fprintf(fp,"Uzgunum !!! Yarismayi Tamamlayamadin.\n");
        }


        }
    if(hp > 0){
	
        printf("Tebrikler !!! Yarismayi %d HP ile bitirdiniz.\n",hp);
        fprintf(fp,"Tebrikler !!! Yarismayi %d HP ile bitirdiniz.\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n",hp);
    }
        fclose(fp);
        
}
