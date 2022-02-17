#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int **matris;
int satir, kolon;
int s, k;
int i;

printf("Matrisin satir sayisi: ");
scanf("%d", &satir);

printf("Matrisin kolon sayisi: ");
scanf("%d", &kolon);


matris = (int **) calloc(satir, sizeof(int));


for(i = 0; i < satir; i++)
{
matris[i] = (int *) calloc(kolon, sizeof(int));
}


for(s = 0; s < satir; s++)
{
for(k = 0; k < kolon; k++) {
	
for(s=0;s< satir;s++){
	for(k=0;k<kolon;k++){
		srand(time(NULL));
 		matris[s][k]=5+rand()%40000;
		printf("%4d",matris[s][k]);
		printf("\t");
	}
	printf("\n");
}
}
}



for(i = 0; i < satir; i++)
free((void *) matris[i]);


free((void *) matris);
return 0;
}
