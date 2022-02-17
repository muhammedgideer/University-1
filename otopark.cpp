		#include <stdio.h>
#include <stdlib.h>



int main()
{
int arabadizi[10],ucretdizi[10];

int i=0, arac_tip[10], giris_saat[10],cikis_saat[10],plaka[10];
int min=0,max=0,sayi,saat_fark=0,giris_ucret=5,sayac=0,plaka_ara;
    for(i=0;i<=sayac;i++){
   printf("\n--------------------------------------------------------------------->\n");
   printf("Arac eklemek icin 1'e basiniz.\n");
   printf("Araclari listelemek icin 2'e basiniz.\n");
   printf("Plakasi girilen aracin ucreti icin 3'e basiniz:\n");
   printf("Araclarin maksimun ve minimun ucretleri ogrenmek icin 4'e basiniz: \n");
   printf("--------------------------------------------------------------------->\n");
   scanf("%d",&sayi);

   if(sayi>4 || sayi<1)
   {
       printf("Hatali sayi girdiniz..\n");
continue;
   }

if(sayi==1)
{
    sayac++;
    printf("Arac Plakasini giriniz: \n");
    scanf("%d",&plaka[i]);
    printf("Arac Tipini giriniz(0-4)arasi\n");
    scanf("%d",&arac_tip[i]);
    if(arac_tip[i]>3 || arac_tip[i]<0)
{
printf("Hatali sayi girdiniz..!\n");
continue;

}
    printf("Giris saatini giriniz: \n");
    scanf("%d",&giris_saat[i]);
    if(giris_saat[i]>24)
    {
        printf("Yanlis saat girisi yaptiniz.\n");
continue;
    }
    printf("Cikis saatini giriniz: \n");
    scanf("%d",&cikis_saat[i]);



    if(cikis_saat[i]>24)
    {
        printf("Yanlis saat girisi yaptiniz.\n");

    }


if(giris_saat[i]>cikis_saat[i])
{
    printf("Hatali saat girisi yaptiniz..!\n");

}

    ucretdizi[i]=(cikis_saat[i]-giris_saat[i])*arac_tip[i]+5;
    arabadizi[i]=plaka;
printf("Arac eklendi.\n");



if(sayac==10)

    break;

}
else if(sayi==2)
{
araclarilistele(arac_tip, giris_saat, cikis_saat);

main();
}
else if(sayi==3)
{


    printf("Aracin ucretini bulmak icin plaka numarasini giriniz: ");
    scanf("%d",&plaka[i]);
   ucrethesapla(arabadizi,plaka);
main();
}

else if(sayi==4)
{

  minucretbul(ucretdizi);
  maksucretbul(ucretdizi);
main();
}

    else
    {
        printf("Yanlis sayi girildi.\n");
    }

}

    return 0;
}

**** araclarilistele()
{

for(i=0;i<sayac;i++)
{
    printf("%d. aracin plaka no: %d Arac Tipi= %d, Giris Saati= %d, Cikis Saati= %d",i+1,plaka[i],arac_tip[i],giris_saat[i],cikis_saat[i]);

    printf("\n");

}

}
int ucrethesapla(int arabadizi[],int plaka1)
{





 for(i=0;i<10;i++)
   {

if(arabadizi[i]==plaka1)
{
    printf("%d.aracin park ucreti= %d TL dir \n",i+1,ucretdizi[i]);

}
}
}
int maksucretbul(int ucretdizi[])
{
    int max=0;
    max=ucretdizi[0];
    for(i=0;i<sayac;i++)
    {
        if(ucretdizi[i]>max){
        max=ucretdizi[i];
}
    }
    printf("Maximun deger= %d",max);
}
int minucretbul(int ucretdizi[])
{
int min=0;
min=ucretdizi[0];
  for(i=0;i<sayac;i++)
    {
        if(ucretdizi[i]<min){
        min=ucretdizi[i];
}
    }
    printf("Minimun deger= %d\n",min);
}

