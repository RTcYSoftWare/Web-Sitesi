#include<stdio.h>
#include<conio.h>


int main(){
	
	int a , b , buyuk_sayi , kucuk_sayi , adet;
	
	printf("ASAL SAYILARIN ARANACAGI SINIRLARI GIRINIZ !!! \n"); //ekrana bilgi yazd�k
	printf("SINIR GIRME ORNEGI = 5-25 VEYA 25-5 \n"); //ekrana bilgi yazd�k
	
	printf("A SAYISINI GIRINIZ = "); //ekrana bilgi yazd�k
	scanf("%d",&a); //A SAYISINI ALDIK ---- 2.ad�m
	
	printf("B SAYISINI GIRINIZ = "); //ekrana bilgi yazd�k
	scanf("%d",&b); // b say�s�n� ald�k ---- 3.ad�m

/*---- B�Y�K K���K SAYI KONTROL� ----*/ 
	if(a > b){ // a say�s� b�y�kse ---- 4.ad�m
		buyuk_sayi = a;	
		kucuk_sayi = b;
	}
	else{
		if(a<b){ // b say�s� b�y�kse ---- 4.ad�m
		buyuk_sayi = b;
		kucuk_sayi = a;
	}
	}
/*---- ASAL SAYILARI BULMA ----*/
	for(int i=kucuk_sayi;i<buyuk_sayi;i++){// s�n�rlar aras�nda d�ng� olu�turduk. ---- 5.ad�m
		int sayac = 0;// sayinin b�l�n�p b�l�nmedi�ini kontrol eden de�i�ken.
		for(int j=2;j<i;j++){// se�ili say�n�n kendisine kadar olan say�lar� bar�nd�ran d�ng�
			if(i%j==0){// sayinin kendisinde ba�ka bir sayiya b�l�np b�l�nmedi�ini kontrol eden �art ---- 6.ad�m
			sayac++;
			}
		}
		if(sayac == 0){
		printf("---- %d \n",i);// asal say�lar� ekrana yazd�rd�k. ---- 7.ad�m
			adet++;//  ka� adet asal say� oldu�unu tutan de�i�ken
		}
	}
	
	
	printf("GIRILEN SINIRLAR ARASINDA %d ADET ASAL SAYI BULUNMAKTADIR.",adet);// asal say� adaetini ekrana yazd�rd�k.
	
	
	getch();
	return 0;
}


// THIS CODES BELONG RTcY SOFTWARE
