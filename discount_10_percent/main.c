#include <stdio.h>

int main() {
	float fiyat;//De�i�ken atan�yor.
	printf("Lutfen urunun fiyatini giriniz= ");//Kullan�c� bilgilendiriyliyor.
	scanf("%f",&fiyat);//Kullan�c�dan veri bekleniyor.
	if(fiyat>0&&fiyat<=100)//Al�nan fiyat�n 100 liraya kadar olmas� ko�uluyla yap� k�s�tland�r�l�yor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*5/100);//As�l fiyattan indirim miktar� ��kar�l�p indirimli fiyat kullan�c�ya g�steriliyor.
	else if(100<fiyat&&fiyat<500)//Al�nan fiyat�n 100 lira ile 500 lira aras�nda olmas� ko�uluyla veri k�s�tland�r�l�yor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*10/100);//As�l fiyattan indirim miktar� ��kar�l�p indirimli fiyat kullan�c�ya g�steriliyor.
	else if(fiyat>=500)//Al�nan fiyat�n 500 liradan fazla olmas� ko�uluyla yap� k�s�tland�r�l�yor.
	printf("Indirimli fiyat=%0.2f TL\n",fiyat-fiyat*15/100);//As�l fiyattan indirim miktar� ��kar�l�p indirimli fiyat kullan�c�ya g�steriliyor.
	else//Al�nan verinin tan�mlanmayan bir de�er olmas� ko�ulunda yap� sonland�r�l�yor
	printf("Yanlis bir giris yaptiniz\n");//Kullan�c� hatas� konusunda bilgilendiriliyor.
//SON
	system("pause");
	return 0;
}
