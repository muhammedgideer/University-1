#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char plaka[10];
	char renk[10];
	int model;
	
}arac_ozellik;

typedef struct
{
	arac_ozellik arac;
	int saat;
	int dakika;
	int saniye;
}arac;

typedef struct 
{
	arac araba[1000];
	int arac_sayisi;
}otopark;

otopark star_otopark={0};

void arac_ekle()
{

	arac arc;
	printf("\n Arac bilgilerini giriniz\n");
	printf("*************\n");
	printf("Plaka:");
	getchar();
	gets(arc.arac.plaka);
	printf("Model:");
	scanf("%d",&arc.arac.model);
	printf("Renk:");
	getchar();
	gets(arc.arac.renk);
	do{
	printf("Giris zamanini giriniz(saat-dakika-saniye arasina bosluk birakiniz)");
	scanf("%d %d %d",&arc.saat,&arc.dakika,&arc.saniye);
	}while(arc.saat<0 || arc.saat>23 || arc.dakika<0 || arc.dakika>59 || arc.saniye<0 || arc.saniye>59);


	star_otopark.araba[star_otopark.arac_sayisi]=arc;
	star_otopark.arac_sayisi++;

	
}

void arac_listele()
{
	int i;
	
	printf("\n>>>>> otoparktaki araclar listesi <<<<<\n");
	
	for(i=0;i<star_otopark.arac_sayisi;i++)
	{
		printf("%d.Arac \n**********\n>>>Plaka:%s \n>>>Renk:%s \n>>>Model:%d  \n>>>Giris saati: %d %d %d \n",i+1,star_otopark.araba[i].arac.plaka,star_otopark.araba[i].arac.renk,star_otopark.araba[i].arac.model,star_otopark.araba[i].saat,star_otopark.araba[i].dakika,star_otopark.araba[i].saniye);
	}
}

int main()
{
	int secim;
	do{

	printf("\n*********\nIslemler\n********\n1-Arac Ekle\n2-Arac Listele\n3-Arac park ucreti: \n4-Cikis\n*********");
	printf("\nIslem Seciniz::\t\n**********\n");
	scanf("%d",&secim);
	system("CLS");
	
	if(secim==1){
		
	arac_ekle();
	
	}
	else if(secim==2){
	arac_listele();
	}
	else if(secim==3){
		printf("30 dakika'nin ucreti:10 TL/n");
	}
	else
	break;
	
	}while(1==1);
	
	

	return 0;
	
	
	
}
