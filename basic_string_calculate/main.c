#include <stdio.h>

int main(){
   
    char dize[]="gonul vurgun ele dustu\n ya gelinir ya gelinmez\n her guzele meyil verme\n ya sevilir ya sevilmez\n\n yogruktur bizim atimiz\n yardan atlatti zatimiz\n gurbet ilde kiymatimiz\n ya bilinir ya bilinmez\n";
//�nce �iirimizi dize de�i�kenine at�yoruz.
	int harf=0, bosluk=0, satir=0, bossatir=0, kelime=0, ayni=0;//Saya� de�i�kenlerimizi at�yoruz.
	float ortkel;//Ortalama kelime say�s� i�in float keywords unu kullan�yoruz.
	
while(dize[harf]!='\0'){//Dizenin karakter say�s� i�in her dize sonunda olan '\0' kadar harf sayac�n� bir art�r�yoruz.
		harf++;
    if(dize[harf]=='\n'){//Sat�r say�s� i�in harf \0 kadar giderken rastlad��� her'\n' i�in satir sayac�m�z� bir art�r�yoruz.
    	satir++;}
    if(dize[harf]==' '){//Karakter say�s�yla harf say�s�n� ay�rt etmek i�in her ' '(bo�luk) ta bosluk sayacimizi bir art�r�yoruz. 
    	bosluk++;}
    if(dize[harf]=='\n'&&dize[harf+1]=='\n'){//Bo� sat�r i�in arka arkaya iki tane'\n' olmas� gerekmektedir. Bunun i�in her rastla�mada bossatir sayac�m�z� bir art�r�yoruz.
    	bossatir++;}
    if(dize[harf]==' '&&dize[harf+1]!=' '){//Kelime say�s� i�in her bo�lukdan sonra bir bo�luk daha gelmiyorsa kelime sayacam�z� bir art�r�yoruz.
    	kelime++;}
    if(dize[harf]=="' ''y''a'' '"){//Benzer kelimeler i�in 'ya' kelimesine her rastla�mam�zda ayni sayac�n� bir art�r�yoruz.
    	ayni++;}
	
}
kelime=kelime+1;ortkel=(float)(kelime)/(float)(satir-bossatir);//Kelime sayac�m�za bir eklememizin nedeni ilk kelimeyi saymams�ndan �t�r�.//Ortalama kelime say�s� i�in de�i�kenlerimizle gerekli i�lemleri yap�yoruz.
		printf("Dortluk sayisi:%d\n",(satir-bossatir)/4);//D�rtl�k say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz
    	printf("Toplam satir sayisi:%d\n",satir);//Sat�r say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz.
    	printf("Kelime sayisi:%d\n",kelime);//Kelime say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz.
		printf("Benzersiz kelime sayisi:%d\n",kelime-ayni);//Benzersiz kelime say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz.
    	printf("Satir basina dusen ortalama kelime sayisi:%0.2f\n",ortkel);//Sat�r ba��na d��en ortalama kelime say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz.
		printf("Toplam karakter sayisi:%d\n",harf-bosluk-satir);//Toplam karakter say�s� i�in gerekli i�lemleri yap�p ekrana bas�yoruz.
	getch();//Sonucu kullan�c�ya g�steriyoruz.
    return 0;//Program sonland�r�l�yor.
}
