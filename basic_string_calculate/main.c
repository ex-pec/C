#include <stdio.h>

int main(){
   
    char dize[]="gonul vurgun ele dustu\n ya gelinir ya gelinmez\n her guzele meyil verme\n ya sevilir ya sevilmez\n\n yogruktur bizim atimiz\n yardan atlatti zatimiz\n gurbet ilde kiymatimiz\n ya bilinir ya bilinmez\n";
//Önce þiirimizi dize deðiþkenine atýyoruz.
	int harf=0, bosluk=0, satir=0, bossatir=0, kelime=0, ayni=0;//Sayaç deðiþkenlerimizi atýyoruz.
	float ortkel;//Ortalama kelime sayýsý için float keywords unu kullanýyoruz.
	
while(dize[harf]!='\0'){//Dizenin karakter sayýsý için her dize sonunda olan '\0' kadar harf sayacýný bir artýrýyoruz.
		harf++;
    if(dize[harf]=='\n'){//Satýr sayýsý için harf \0 kadar giderken rastladýðý her'\n' için satir sayacýmýzý bir artýrýyoruz.
    	satir++;}
    if(dize[harf]==' '){//Karakter sayýsýyla harf sayýsýný ayýrt etmek için her ' '(boþluk) ta bosluk sayacimizi bir artýrýyoruz. 
    	bosluk++;}
    if(dize[harf]=='\n'&&dize[harf+1]=='\n'){//Boþ satýr için arka arkaya iki tane'\n' olmasý gerekmektedir. Bunun için her rastlaþmada bossatir sayacýmýzý bir artýrýyoruz.
    	bossatir++;}
    if(dize[harf]==' '&&dize[harf+1]!=' '){//Kelime sayýsý için her boþlukdan sonra bir boþluk daha gelmiyorsa kelime sayacamýzý bir artýrýyoruz.
    	kelime++;}
    if(dize[harf]=="' ''y''a'' '"){//Benzer kelimeler için 'ya' kelimesine her rastlaþmamýzda ayni sayacýný bir artýrýyoruz.
    	ayni++;}
	
}
kelime=kelime+1;ortkel=(float)(kelime)/(float)(satir-bossatir);//Kelime sayacýmýza bir eklememizin nedeni ilk kelimeyi saymamsýndan ötürü.//Ortalama kelime sayýsý için deðiþkenlerimizle gerekli iþlemleri yapýyoruz.
		printf("Dortluk sayisi:%d\n",(satir-bossatir)/4);//Dörtlük sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz
    	printf("Toplam satir sayisi:%d\n",satir);//Satýr sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz.
    	printf("Kelime sayisi:%d\n",kelime);//Kelime sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz.
		printf("Benzersiz kelime sayisi:%d\n",kelime-ayni);//Benzersiz kelime sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz.
    	printf("Satir basina dusen ortalama kelime sayisi:%0.2f\n",ortkel);//Satýr baþýna düþen ortalama kelime sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz.
		printf("Toplam karakter sayisi:%d\n",harf-bosluk-satir);//Toplam karakter sayýsý için gerekli iþlemleri yapýp ekrana basýyoruz.
	getch();//Sonucu kullanýcýya gösteriyoruz.
    return 0;//Program sonlandýrýlýyor.
}
