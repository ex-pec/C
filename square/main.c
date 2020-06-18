#include <stdio.h>

int main() {
	int sayi;//Deðiþken atýyoruz.
	printf("X degerini giriniz= ");//Kullanýcý bilgilendiriliyor.
	scanf("%d",&sayi);//Veri alýnýyor.
	if(sayi<0)//Sayýnýn negatif olmasý koþuluyla yapý kýsýtlandýrýlýyor.
	printf("f(x)=%d",sayi);//Fonksiyon iþlemi yapýlýp kullanýcýya veri gösteriliyor.
	else if(1<sayi&&sayi<10)//Sayýnýn 1 ile 10 arasýnda olmasý koþuluyla yapý kýsýtlandýrýlýyor. 
	printf("f(x)=%d",sayi*sayi);//Fonksiyon iþlemi yapýlýp kullanýcýya veri gösteriliyor.
	else if(11<sayi&&sayi<100)//Sayýnýn 11 ile 100 arasýnda olmasý ile yapý kýsýtlandýrýlýyor.
	printf("f(x)=%d",sayi*sayi+sayi);//Fonksiyon iþlemi yapýlýp kullanýcýya veri gösteriliyor.
	else if(sayi>=10)//Sayýnýn 10 dan büyük veya eþit olmasý koþuluyla yapý kýsýtlandýrýlýyor.
	printf("f(x)=%d",sayi*sayi+2*sayi+5);//Fonksiyon iþlemi yapýlýp kullanýcýya veri gösteriliyor.
	else//Tanýmlanmayan bir deðer girilmesi sonucunda gösterilmesi gereken çýktý iþleniyor.
	printf("Tanimlanmayan bir giris yaptiniz.\n");
	//SON
	system("pause");
return 0;
}
