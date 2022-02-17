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
	int giris_saat;
	int giris_dakika;
	int giris_saniye;
	int cikis_saat;
	int cikis_dakika;
	int cikis_saniye;
	int park_ucreti;
}arac;

typedef struct 
{
	arac araba[1000];
	int arac_sayisi;
}otopark;

otopark star_otopark={0};

void AracEkle()
{

	arac arc;
	printf("\n Arac bilgilerini giriniz\n");
	printf("***************************************\n");
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
	scanf("%d %d %d",&arc.giris_saat,&arc.giris_dakika,&arc.giris_saniye);
	}while(arc.giris_saat<0 || arc.giris_saat>23 || arc.giris_dakika<0 || arc.giris_dakika>59 || arc.giris_saniye<0 || arc.giris_saniye>59);
	do{
	printf("Cikis zamanini giriniz(saat-dakika-saniye arasina bosluk birakiniz)");
	scanf("%d %d %d",&arc.cikis_saat,&arc.cikis_dakika,&arc.cikis_saniye);
	}while(arc.cikis_saat<0 || arc.cikis_saat>23 || arc.cikis_dakika<0 || arc.cikis_dakika>59 || arc.cikis_saniye<0 || arc.cikis_saniye>59);


	star_otopark.araba[star_otopark.arac_sayisi]=arc;
	star_otopark.arac_sayisi++;

	
}

void AraclariListele()
{
	int i;
	
	printf("\n>>>>> otoparktaki araclar listesi <<<<<\n");
	
	for(i=0;i<star_otopark.arac_sayisi;i++)
	{
		printf("%d.Arac \n**************************\n>>>Plaka:%s \n>>>Renk:%s \n>>>Model:%d  \n>>>Giris saati:%d:%d:%d\n>>>Cikis saati:%d:%d:%d",i+1,star_otopark.araba[i].arac.plaka,star_otopark.araba[i].arac.renk,star_otopark.araba[i].arac.model,star_otopark.araba[i].giris_saat,star_otopark.araba[i].giris_dakika,star_otopark.araba[i].giris_saniye,star_otopark.araba[i].cikis_saat,star_otopark.araba[i].cikis_dakika,star_otopark.araba[i].cikis_saniye);
	}
}



int main()
{
	int secim;
	do{

	printf("\n**************************\nIslemler\n**************************\n1-Arac Ekle\n2-Arac Listele\n3-Arac park ucreti: \n4-Cikis\n**************************");
	printf("\nIslem Seciniz::\t\n**************************\n");
	scanf("%d",&secim);
	system("CLS");
	
	if(secim==1){
		
	AracEkle();
	
	}
	else if(secim==2){
	AraclariListele();
	}

	}
	else if(secim==0)
	break;
	
	}while(1==1);
	
	

	return 0;
	
	
	
}
