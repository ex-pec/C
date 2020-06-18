#include <stdio.h>

int main() {
	float fiyat;//Deðiþken atanýyor.
	printf("Lutfen urunun fiyatini giriniz= ");//Kullanýcý bilgilendiriyliyor.
	scanf("%f",&fiyat);//Kullanýcýdan veri bekleniyor.
	if(fiyat>0&&fiyat<=100)//Alýnan fiyatýn 100 liraya kadar olmasý koþuluyla yapý kýsýtlandýrýlýyor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*5/100);//Asýl fiyattan indirim miktarý çýkarýlýp indirimli fiyat kullanýcýya gösteriliyor.
	else if(100<fiyat&&fiyat<500)//Alýnan fiyatýn 100 lira ile 500 lira arasýnda olmasý koþuluyla veri kýsýtlandýrýlýyor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*10/100);//Asýl fiyattan indirim miktarý çýkarýlýp indirimli fiyat kullanýcýya gösteriliyor.
	else if(fiyat>=500)//Alýnan fiyatýn 500 liradan fazla olmasý koþuluyla yapý kýsýtlandýrýlýyor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*15/100);//Asýl fiyattan indirim miktarý çýkarýlýp indirimli fiyat kullanýcýya gösteriliyor.
	else//Alýnan verinin tanýmlanmayan bir deðer olmasý koþulunda yapý sonlandýrýlýyor
	printf("Yanlis bir giris yaptiniz\n");//Kullanýcý hatasý konusunda bilgilendiriliyor.
//SON
	system("pause");
	return 0;
}
