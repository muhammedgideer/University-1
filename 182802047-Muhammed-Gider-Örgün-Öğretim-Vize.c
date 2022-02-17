#include <stdio.h>
#include <stdlib.h>
void kaprekarMi(int sayi,int boyut,int basla)
{
    int kuvvet=10,yok=0;
    int kare = pow(sayi,2);
    while(kuvvet<=kare)
    {
        int sag = kare%kuvvet;
        int sol = kare/kuvvet;
        if((sag>0) && (sol>0))
        {
            if(sayi==(sol+sag))
            {
                printf("kaprekar 1 => %d \n ",sayi);
                yok++;
            }
        }
        kuvvet = kuvvet * 10;
    }
    if(boyut==(basla+1) && yok==0)
    {
    	printf("\n-------------------------------------------\nHerhangi Bir Kaprekar Sayi Bulunamadi.\n-------------------------------------\n");
	}
    return yok;
}



int matrisolustur(int satir,int kolon)
{
int **matris,i,j,s,k;
	
matris = (int **) calloc(satir, sizeof(int));


for(i = 0; i < satir; i++)
{
matris[i] = (int *) calloc(kolon, sizeof(int));
}

srand(time(NULL));
for(s = 0; s < satir; s++)
{
for(k = 0; k < kolon; k++) {

matris[s][k]=5+rand()%40000;

}
}

return matris;


}


dizisirala(int dizi[],int boyut)
{
	int temp,i,j;
	for(i=0;i<boyut-1;i++)
	{
		for(j=0;j<boyut-1;j++)
		{
			if(dizi[j]<dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
}


int main()
{
int **matris,*dizi;
int satir, kolon;
int s, k;
int i,j,temp;

printf("Matrisin satir sayisi: ");
scanf("%d", &satir);

printf("Matrisin kolon sayisi: ");
scanf("%d", &kolon);

matris=matrisolustur(satir,kolon);

/////matris yaz//////

printf("\nmatris\n---------------------------------\n");
for(s=0;s< satir;s++){
	for(k=0;k<kolon;k++){
		printf("%4d",matris[s][k]);
		printf("\t");
	}
	printf("\n");
}

///////////matrisi sýralamak için tek diziye çeviriyoruz sýralýyoruz sonra da tekrar matrise atýp yazdýrýyoruz/////////////////////

dizi = (int *) calloc((kolon*satir), sizeof(int));

i=0;
for(s = 0; s < satir; s++)
{
for(k = 0; k < kolon; k++) {

	dizi[i]=matris[s][k];
	i++;
}
}

//sýralama iþlemleri
int boyut=satir*kolon;

dizisirala(dizi,boyut);
	
i=0;
for(s = 0; s < satir; s++)
{
for(k = 0; k < kolon; k++) {

matris[s][k]=dizi[i];
i++;
}
}
	
	printf("\nSiralanmis matris\n---------------------------------\n");
	for(s=0;s< satir;s++){
	for(k=0;k<kolon;k++){
		printf("%4d",matris[s][k]);
		printf("\t");
	}
	printf("\n");
}

printf("\nSiralanmis transpoze matris\n---------------------------------\n");
for(s=0;s< kolon;s++){
	for(k=0;k<satir;k++){
		printf("%4d",matris[k][s]);
		printf("\t");
	}
	printf("\n");
}
int basla=0;
for(s=0;s< kolon;s++){
	for(k=0;k<satir;k++){
	kaprekarMi(matris[k][s],boyut,basla);
	basla++;
	}

}


////////////matrisin normal halini ve transpozesini transpoze.txt ye yazdýrma bölümü //////////////////////
FILE*fp=fopen("transpoze.txt","a");
fprintf(fp,"\n------------------------\n");
for(s=0;s< satir;s++){
	for(k=0;k<kolon;k++){
		fprintf(fp,"%4d",matris[s][k]);
		fprintf(fp,"\t");
	}
	fprintf(fp,"\n");
}
fprintf(fp,"\n---------------------------\n");
for(s=0;s< kolon;s++){
	for(k=0;k<satir;k++){
		fprintf(fp,"%4d",matris[k][s]);
		fprintf(fp,"\t");
	}
	fprintf(fp,"\n");
}
 fclose(fp);
 
 printf("\nYazdirma Islemi Tamamlandi.\n");


////////////////////////////////////////////////////////////////////////////
for(i = 0; i < satir; i++)
free((void *) matris[i]);


free((void *) matris);
return 0;
}
