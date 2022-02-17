#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10];
    int *diziPtr = dizi;

    int diziTek[10];
    int *pTek = diziTek;

    int diziCift[10];
    int *pCift = diziCift;

	int i,a=1;
	int degistir;
	degistir=time(NULL);
	srand(degistir);

    for(i=0; i<10; i++)
    {
        a=rand()%100+1;
        dizi[i]=a;
    }

    int j=0, k=0,teksay,ciftsay;
    for(i=0; i<10; i++)
    {
        if(*(diziPtr + i)%2 == 0)
        {
            *(pCift + j) = *(diziPtr + i);
            j++;
            ciftsay++;
        }
        else{
            *(pTek + k) = *(diziPtr + i);
            k++;
            teksay++;
        }
    }

    printf("TEK SAYILAR DIZISI\n");
    for(i=0; i<teksay; i++)
    {
        printf("%d\n",pTek[i]);
    }
    printf("CIFT SAYILAR DIZISI\n");
    for(i=0; i<ciftsay; i++)
    {
        printf("%d\n",pCift[i]);
    }


    return 0;
}
