#include <stdio.h>
#include <stdlib.h>


void randomAtama()
{
//diziyi yaratiyoruz
int dizi[10];
//for dongusunun i degiskenini tan�mlama
int i=0;
//random sayinin atanacagi degiskeni atama
int randint;
//randommun zamana bagli olarak degismesini saglayarak randomun hep ayni cikmamasini saglama
srand(time(0));
//dongusu i�inde random sayi �retip diziye atiyoruz ve bunu ekrana bastiriyoruz.
int toplam=0;
for(i;i<=9;i++)
{
//random sayi uretme ve degiskene atama
randint=rand()%100+1;

//dizinin i. eleman�na random sayiyi atama
dizi[i]=randint;
//random uretilen sayilar� topluyoruz
toplam=toplam+dizi[i];
//ekrana bast�rma
printf("random uretilen sayi:");
printf("%d",dizi[i]);
printf(" dizinin:");
printf("%d",i);
printf(".ci elemani \n");
//sayinin konumuna bak�yor
if(dizi[i]<50)
{printf("sayi 50 den kucuk \n");}
else if(dizi[i]==50)
{printf("sayi 50 ye esit \n");}
else
{printf("sayi 50 den buyuk \n");}
}
//toplam� bast�rma
printf("Uretilen sayilarin toplami:");
printf("%d",toplam);
}

int main()

{
//yarattigimiz fonksiyonu main de �alismasi i�in �agiriyoruz
randomAtama();

getch();
return 0;
}

/*int main() {
	int dizi[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *diziPtr;
	diziPtr=&dizi;
	return 0;
}*/
