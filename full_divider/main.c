#include<stdio.h>//Program�m�z i�in gerekli k�t�phaneyi ekliyoruz
#include<locale.h>//T�rk�e karakterlerin kullan�m� i�in gerekli olan k�t�phaneyi ekliyoruz.

int main(){
	setlocale(LC_ALL,"Turkish");//T�rk�e karakter kullan�m� i�in gerekli kodu yaz�yoruz.
int i, sayac=0;//Program�m�z i�in de�i�ken atamas� yap�yoruz.
float tamsayi;//Bu de�i�keni girilen ondal�kl� say�lar i�in at�yoruz.
do{
	printf("Pozitif tam say� de�erinizi giriniz= ");//Kullan�c�ya istenilen veri hakk�nda bilgi veriyoruz.
	scanf("%f",&tamsayi);//Kullan�c�dan veri bekliyoruz.
if(tamsayi<0 && (int)tamsayi==(float)tamsayi)//Al�nan verinin 0 dan k���k bir tamsay� olmas� ko�ulunda negatifdir diyip d�ng�y� ba�a al�yoruz.
printf("%0.0f negatif bir say�d�r.\n",tamsayi);//Burada float de�i�kenini virg�ls�z olarak kullan�yoruz ��nk� zaten bu ko�ulun sa�lanmas� i�in tam say� olmas� laz�m ve tam say�dan sonra gereksiz 0 lar olmas�ndan kurtarm�� oluyoruz.
else if((float)tamsayi==0)//E�er girilen say�n�n float de�eri 0 ise bu tek bir say� olabilir o da 0 d�r.
printf("0 pozitif bir say� de�ildir.\n");//Girilen say�n�n 0 oldu�unu bildi�imizden scanf fonksiyonundaki de�i�kene ihtiya� duymadan haz�r ��kt�m�z� veriyoruz.
else if(tamsayi<=0||(tamsayi>0 &&(int)tamsayi!=(float)tamsayi))//Burada girilen say�n�n ondal�kl� olmas� ko�ulunda a�a��daki ��kt�y� veriyoruz.(E�er ilk if deki ko�ul olmasayd� negatif ondal�kl� ifadelerde bu ko�ul �al��mayacakt�.
printf("Ondal�kl� say�lar ko�ulumuza uymamaktad�r.\n");//Burada ��kt�m�z� veriyoruz.
} while ((int)tamsayi<=0||(tamsayi>0 &&(int)tamsayi!=(float)tamsayi));//Burada girilen say�n�n tam say� ve pozitif olmas� ko�uluyla d�ng�den ��kartacak kodu yaz�yoruz.

for(i=0; i<=tamsayi; i+=4){//Ba�lang��,ko�ul ve de�i�im ifadelerini tan�ml�yoruz. 
	sayac++;}//Uygun her ko�ulda sayac�m�z 1 artacak.
	sayac=sayac-1;//-1 olmas�n�n nedeni 0 � da d�ng�ye katmas�ndan dolay�.
	printf("4 ile b�l�nen say� adedi           = %d\n",sayac);//Bulunan sonucu kullan�c�ya g�steriyoruz.

getch();//Sonucu kullan�c�ya g�stermek i�in program� bir sonraki hamleye kadar durduruyoruz.
return 0;//Program sonland�l�m��t�r...
	
	
}
