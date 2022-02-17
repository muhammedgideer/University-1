#include <stdio.h>
#include <stdlib.h>


void randomAtama()
{
//diziyi yaratiyoruz
int dizi[10];
//for dongusunun i degiskenini tanýmlama
int i=0;
//random sayinin atanacagi degiskeni atama
int randint;
//randommun zamana bagli olarak degismesini saglayarak randomun hep ayni cikmamasini saglama
srand(time(0));
//dongusu içinde random sayi üretip diziye atiyoruz ve bunu ekrana bastiriyoruz.
int toplam=0;
for(i;i<=9;i++)
{
//random sayi uretme ve degiskene atama
randint=rand()%100+1;

//dizinin i. elemanýna random sayiyi atama
dizi[i]=randint;
//random uretilen sayilarý topluyoruz
toplam=toplam+dizi[i];
//ekrana bastýrma
printf("random uretilen sayi:");
printf("%d",dizi[i]);
printf(" dizinin:");
printf("%d",i);
printf(".ci elemani \n");
//sayinin konumuna bakýyor
if(dizi[i]<50)
{printf("sayi 50 den kucuk \n");}
else if(dizi[i]==50)
{printf("sayi 50 ye esit \n");}
else
{printf("sayi 50 den buyuk \n");}
}
//toplamý bastýrma
printf("Uretilen sayilarin toplami:");
printf("%d",toplam);
}

int main()

{
//yarattigimiz fonksiyonu main de çalismasi için çagiriyoruz
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
