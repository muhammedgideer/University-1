#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int *dizi,i;
	int n1,n2;
	printf("Dizinin boyutunu girin[][]");
	scanf("%d %d",&n1,&n2);
	dizi=(int*) malloc(sizeof(int)*n1*n2);
	dizi[1]=5;
	dizi[29]=10;
	printf("%d\n",dizi[1]);
	printf("%d\n",dizi[29]);
	printf("%d",dizi[31]);
return 0;
}
