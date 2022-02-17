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
	int giris;
	int cikis;
	int giris_saat;
	int giris_dakika;
	int giris_saniye;
	int cikis_saat;
	int cikis_dakika;
	int cikis_saniye;
	int park_ucreti_tam;
	int park_ucreti_kusurat;
	int gun_farki_tam;
	int gun_farki_kusurat;
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
	printf("********************************************************\n");
	printf("\n Arac bilgilerini giriniz\n");
	printf("********************************************************\n");
	printf("Plaka:");
	getchar();
	gets(arc.arac.plaka);
	do{
	printf("\nModel(yil giriniz):");
	scanf("%d",&arc.arac.model);
	}while(arc.arac.model<0 || arc.arac.model>2020);
	printf("\nRenk:");
	getchar();
	gets(arc.arac.renk);
	printf("\n");
	do{
	printf("Giris zamanini giriniz(saat-dakika-saniye arasina bosluk birakiniz)");
	scanf("%d %d %d",&arc.giris_saat,&arc.giris_dakika,&arc.giris_saniye);
	printf("\n");
	}while(arc.giris_saat<0 || arc.giris_saat>23 || arc.giris_dakika<0 || arc.giris_dakika>59 || arc.giris_saniye<0 || arc.giris_saniye>59); 
	printf("\n");
	do{
	printf("Cikis zamanini giriniz(saat-dakika-saniye arasina bosluk birakiniz)");
	scanf("%d %d %d",&arc.cikis_saat,&arc.cikis_dakika,&arc.cikis_saniye);
	printf("\n");
	}while(arc.cikis_saat<0 || arc.cikis_saat>23 || arc.cikis_dakika<0 || arc.cikis_dakika>59 || arc.cikis_saniye<0 || arc.cikis_saniye>59);

	arc.cikis=((arc.cikis_saat*60*60)+(arc.cikis_dakika*60)+(arc.cikis_saniye));
	arc.giris=((arc.giris_saat*60*60)+(arc.giris_dakika*60)+(arc.giris_saniye));
	arc.park_ucreti_tam=((arc.cikis-arc.giris)*0.00138888889);
	arc.park_ucreti_kusurat=((arc.cikis-arc.giris)*0.0833333333);
	arc.gun_farki_tam=(((arc.cikis+86400)-arc.giris)*0.00138888889);
	arc.gun_farki_kusurat=(((arc.cikis+86400)-arc.giris)*0.0833333333);
	star_otopark.araba[star_otopark.arac_sayisi]=arc;
	star_otopark.arac_sayisi++;
	
	
}

void AracListele()
{
	int i;
	
	printf("********************************************************\n");
	
	printf("\n>>>>> otoparktaki araclar listesi <<<<<\n");
	
	for(i=0;i<star_otopark.arac_sayisi;i++)
	{
		printf("\n%d.Arac \n********************************************************\n>>>Plaka:%s \n>>>Renk:%s \n>>>Model:%d  \n>>>Giris saati:%d:%d:%d\n>>>Cikis saati:%d:%d:%d\n",i+1,star_otopark.araba[i].arac.plaka,star_otopark.araba[i].arac.renk,star_otopark.araba[i].arac.model,star_otopark.araba[i].giris_saat,star_otopark.araba[i].giris_dakika,star_otopark.araba[i].giris_saniye,star_otopark.araba[i].cikis_saat,star_otopark.araba[i].cikis_dakika,star_otopark.araba[i].cikis_saniye);
	}
}

void Otopark_Ucreti()
{
	int i;
	
	printf("********************************************************\n");
	printf("\n>>>>> otoparktaki araclar listesi <<<<<\n");
		for(i=0;i<star_otopark.arac_sayisi;i++)
	if(star_otopark.araba[i].cikis>star_otopark.araba[i].giris){
		printf("\n%d.Arac \n********************************************************\n>>>Plaka:%s \n>>>Renk:%s \n>>>Model:%d  \n>>>Giris saati:%d:%d:%d\n>>>Cikis saati:%d:%d:%d\n>>>Park ucreti:%d,%d TL'dir.\n",i+1,star_otopark.araba[i].arac.plaka,star_otopark.araba[i].arac.renk,star_otopark.araba[i].arac.model,star_otopark.araba[i].giris_saat,star_otopark.araba[i].giris_dakika,star_otopark.araba[i].giris_saniye,star_otopark.araba[i].cikis_saat,star_otopark.araba[i].cikis_dakika,star_otopark.araba[i].cikis_saniye,star_otopark.araba[i].park_ucreti_tam,star_otopark.araba[i].park_ucreti_kusurat);
	}
	else if(star_otopark.araba[i].cikis<star_otopark.araba[i].giris)
	{
					printf("\n%d.Arac \n********************************************************\n>>>Plaka:%s \n>>>Renk:%s \n>>>Model:%d  \n>>>Giris saati:%d:%d:%d\n>>>Cikis saati:%d:%d:%d\nucretiniz gun farkiyla hesaplanmistir\n>>>Park ucreti:%d,%d TL'dir.\n",i+1,star_otopark.araba[i].arac.plaka,star_otopark.araba[i].arac.renk,star_otopark.araba[i].arac.model,star_otopark.araba[i].giris_saat,star_otopark.araba[i].giris_dakika,star_otopark.araba[i].giris_saniye,star_otopark.araba[i].cikis_saat,star_otopark.araba[i].cikis_dakika,star_otopark.araba[i].cikis_saniye,star_otopark.araba[i].gun_farki_tam,star_otopark.araba[i].gun_farki_kusurat);
	}
	
	
}

int main()
{
	int secim;
	do{
	printf("\n********************************************************\nIslemler\n********************************************************\n1-Arac Ekle\n2-Arac Listele\n3-Arac park ucreti: \n4-Cikis\n********************************************************");
	printf("\nIslem Seciniz::\t\n********************************************************\n");
	scanf("%d",&secim);
	system("CLS");
	
	if(secim==1){
		
	AracEkle();
	
	}
	else if(secim==2){
	AracListele();
	}
	else if(secim==3){
	Otopark_Ucreti();
	}

	else if(secim==4)
	break;
	
	}while(1==1);
	
	

	return 0;
	
	
	
}
