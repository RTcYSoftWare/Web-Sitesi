#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){
	
	int ogr_numara , ogr_vize , ogr_final , ogr_ortalama; //gerekli olan de�i�kenleri tan�mlad�k.
	char ogr_ad[50] , ogr_soyad[50];
	
	
	printf("OGRENI NUMARARANIZI GIRINIZ = "); //ekrana bilgi yazd�k
	scanf("%d",&ogr_numara); //o�rencinin numaras�n� ald�k ---- 2.ad�m
	
	printf("ADINIZI BOSLUKSUZ SEKILDE GIRINIZ ="); //ekrana bilgi yazd�k
	scanf("%s",ogr_ad); //��rencinin ad�n� ald�k ---- 3.ad�m
	
	printf("SOYADINIZI BOSLUKSUZ SEKILDE GIRINIZ ="); //ekrana bilgi yazd�k
	scanf("%s",ogr_soyad); //��rencinin soyad�n� ald�k. ---- 3.ad�m
			
	printf("VIZE NOTUNU GIRINIZ = "); //ekrana bilgi yazd�k
	scanf("%d",&ogr_vize); //��rencinin vize notunu ald�k ---- 4.ad�m
	
	printf("FINAL NOTUNU GIRINIZ = "); //ekrana bilgi yazd�k
	scanf("%d",&ogr_final); //��rencinin final notunu ald�k. ---- 5.ad�m
	
	ogr_ortalama = ((ogr_vize*30)/100) + ((ogr_final*70)/100); // ��rencinin ortalamas�n� hesaplay�p de�i�kene atad�k ---- 6.ad�m
	
	printf("OGRENCI NO = %d , OGRENCI ORTALAMA = %d ",ogr_numara,ogr_ortalama);// ��rencinin numaras�n� ve ortalamas�n� ekrana yazd�rd�k. ---- 7.ad�m
	
	
	
	
	getch();
	return 0;
}



// THIS CODES BELONG RTcY SOFTWARE
