#include <stdio.h>

int main() {
	int sayi;//De�i�ken at�yoruz.
	printf("X degerini giriniz= ");//Kullan�c� bilgilendiriliyor.
	scanf("%d",&sayi);//Veri al�n�yor.
	if(sayi<0)//Say�n�n negatif olmas� ko�uluyla yap� k�s�tland�r�l�yor.
	printf("f(x)=%d",sayi);//Fonksiyon i�lemi yap�l�p kullan�c�ya veri g�steriliyor.
	else if(1<sayi&&sayi<10)//Say�n�n 1 ile 10 aras�nda olmas� ko�uluyla yap� k�s�tland�r�l�yor. 
	printf("f(x)=%d",sayi*sayi);//Fonksiyon i�lemi yap�l�p kullan�c�ya veri g�steriliyor.
	else if(11<sayi&&sayi<100)//Say�n�n 11 ile 100 aras�nda olmas� ile yap� k�s�tland�r�l�yor.
	printf("f(x)=%d",sayi*sayi+sayi);//Fonksiyon i�lemi yap�l�p kullan�c�ya veri g�steriliyor.
	else if(sayi>=10)//Say�n�n 10 dan b�y�k veya e�it olmas� ko�uluyla yap� k�s�tland�r�l�yor.
	printf("f(x)=%d",sayi*sayi+2*sayi+5);//Fonksiyon i�lemi yap�l�p kullan�c�ya veri g�steriliyor.
	else//Tan�mlanmayan bir de�er girilmesi sonucunda g�sterilmesi gereken ��kt� i�leniyor.
	printf("Tanimlanmayan bir giris yaptiniz.\n");
	//SON
	system("pause");
return 0;
}
