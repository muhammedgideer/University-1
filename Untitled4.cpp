#include <iostream>

using namespace std;

int **Dizi1;

int **Dizi2;

int boyut1;

int boyut2;

int boyutx1;

int boyutx2;

int Z =0;

int **NewTable(int,int);

void ClearTable(int**,int);

void MatrisCarp(int**, int**, int, int, int, int);

int main()

{

 cout<<"1. Dizinin 1. Boyutunu Giriniz:";

 cin>>boyut1;

 cout<<endl;

 cout<<"1. Dizinin 2. Boyutunu Giriniz:";

 cin>>boyut2;

	

 cout<<"2. Dizinin 1. Boyutunu Giriniz:";

 cin>>boyutx1;

 cout<<endl;

 cout<<"2. Dizinin 2. Boyutunu Giriniz:";

 cin>>boyutx2;

	

	

 Dizi1=NewTable(boyut1,boyut2);

 Dizi2=NewTable(boyutx1,boyutx2);

 for(int l=0;l<boyut1;l++)

 {

  for(int r=0;r<boyut2;r++)

  {

   Z++;

   cout<<"1. Dizinin "<<Z<<" . ci elemanini Giriniz: ";

   cin>>Dizi1[l][r];

   cout<<endl;

  }

  

 }

	

 Z=0;

  

  for(int q1=0;q1<boyutx1;q1++)

  {

   for(int q2=0;q2<boyutx2;q2++)

   {

    Z++;

    cout<<"2. Dizinin "<<Z<<" . ci elemanini Giriniz: ";

    cin>>Dizi2[q1][q2];

    cout<<endl;

   }

  

  }

  if(boyut2!=boyutx1)

  {

   cout<<"1. Matrisin Sutun Sayisi, 2. Matrisin Satir Sayisina Esit Degildi";

  }

  else

  {

   MatrisCarp(Dizi1,Dizi2,boyut1,boyut2,boyutx1,boyutx2);

  }

 cin.get();

 cin.get();

}

void MatrisCarp(int **dizi1,int **dizi2, int b1, int b2, int c1, int c2)

{

 int sonuc=0;

 int mtrx1=0;

 int mtrx2=0;

 int **CarpimDizi = NewTable(b1,c2);

 for(int i=0;i<b1;i++)

 {

  for(int k=0;k<b2;k++)

  {

   for(int c=0;c<b2;c++)

   {

    

   mtrx1=dizi1[i][c];

   mtrx2=dizi2[c][k];

   sonuc+=mtrx1*mtrx2;

   

   }

   CarpimDizi[i][k]=sonuc;

   sonuc=0;

  }

 }

	

 cout<<endl;

 cout<<"***********************"<<endl;

 cout<<"GIRDIGINIZ MATRISLERIN CARPIMI"<<endl;

	

 for(int x1=0;x1<b1;x1++)

 {

  for(int x2=0;x2<b2;x2++)

  {

   cout<<CarpimDizi[x1][x2]<<" ";

  }

  cout<<endl;

 }

 ClearTable(CarpimDizi,b1);

 ClearTable(dizi1,b1);

 ClearTable(dizi2,c1);

}

 int** NewTable(int rows, int columns)

 {

  int** tablo = new int*[rows];

  for (int i = 0; i < rows; i++)

  {

   tablo[i] = new int[columns];

  }

  return tablo; 

 }

 void ClearTable(int** ctable, int alan)

 {

  if (ctable)

  {

   for (int k = 0; k < alan; k++)

   {

    if (ctable[k])

    {

     delete[] ctable[k];

    }

   }

   delete[] ctable;

  }

 }


