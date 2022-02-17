#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int **matris;
    int satir, kolon;
    int s, k;
    int i;
    srand(time(0));

    printf("Matrisin satir sayisi: ");
    scanf("%d", &satir);

    printf("Matrisin kolon sayisi: ");
    scanf("%d", &kolon);

    /* dýþtaki dizi için bellek alaný isteniyor  */
    matris = (int **) calloc(satir, sizeof(int));

    /* içteki dizi için bellek alaný isteniyor */
    for(i = 0; i < satir; i++)
	matris[i] = (int *) calloc(kolon, sizeof(int));

    /* matrisin elemanlarý okunuyor */
    for(s = 0; s < satir; s++)
	for(k = 0; k < kolon; k++) {
	    matris[s][k]=rand()%4000;
        }

    printf("\nGirilen matris:\n");

    for(s = 0; s < satir; s++) {
	for(k = 0; k < kolon; k++)
	    printf("%4d", matris[s][k]);

        printf("\n");
    }


    return(0);
}
