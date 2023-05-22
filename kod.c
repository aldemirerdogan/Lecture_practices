#include<stdio.h>    // kutuphanalerin eklenmesi
#define BOYUT 10

void degerAL(int[], int);   // 1. fonk prototipi
int buyukBUL(int[], int);  // 2. fonk prototipi

void main (void)
{ 	
	int dizi[BOYUT];
	int enBuyuk;
	degerAL(dizi, BOYUT); // dizinin adresi
	enBuyuk = buyukBUL(dizi, BOYUT); // en buyugun bulunması
	printf("Dizi max. elemanı %d. siradaki %d !\n", enBuyuk+1,dizi[enBuyuk]);
}

// 1. fonksiyon gövdesi
void degerAL(int diziElemanlari[], int boyut)
{
	for (int i=0; i<10; i++)
	{
		printf("Dizinin %d. elemanini giriniz: ", i+1);
		scanf("%d", &diziElemanlari[i]);
	}
	
}

// 2. fonksiyon gövdesi
int buyukBUL(int diziElemanlari[], int boyut )
{
	int konum, enBuyukEleman = diziElemanlari[0];
	
	for(int i=0; i<boyut ; i++)
		if(diziElemanlari[i]>enBuyukEleman)
		{
			enBuyukEleman = diziElemanlari[i];
			konum = i;
		}
}