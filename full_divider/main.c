#include<stdio.h>//Programýmýz için gerekli kütüphaneyi ekliyoruz
#include<locale.h>//Türkçe karakterlerin kullanýmý için gerekli olan kütüphaneyi ekliyoruz.

int main(){
	setlocale(LC_ALL,"Turkish");//Türkçe karakter kullanýmý için gerekli kodu yazýyoruz.
int i, sayac=0;//Programýmýz için deðiþken atamasý yapýyoruz.
float tamsayi;//Bu deðiþkeni girilen ondalýklý sayýlar için atýyoruz.
do{
	printf("Pozitif tam sayý deðerinizi giriniz= ");//Kullanýcýya istenilen veri hakkýnda bilgi veriyoruz.
	scanf("%f",&tamsayi);//Kullanýcýdan veri bekliyoruz.
if(tamsayi<0 && (int)tamsayi==(float)tamsayi)//Alýnan verinin 0 dan küçük bir tamsayý olmasý koþulunda negatifdir diyip döngüyü baþa alýyoruz.
printf("%0.0f negatif bir sayýdýr.\n",tamsayi);//Burada float deðiþkenini virgülsüz olarak kullanýyoruz çünkü zaten bu koþulun saðlanmasý için tam sayý olmasý lazým ve tam sayýdan sonra gereksiz 0 lar olmasýndan kurtarmýþ oluyoruz.
else if((float)tamsayi==0)//Eðer girilen sayýnýn float deðeri 0 ise bu tek bir sayý olabilir o da 0 dýr.
printf("0 pozitif bir sayý deðildir.\n");//Girilen sayýnýn 0 olduðunu bildiðimizden scanf fonksiyonundaki deðiþkene ihtiyaç duymadan hazýr çýktýmýzý veriyoruz.
else if(tamsayi<=0||(tamsayi>0 &&(int)tamsayi!=(float)tamsayi))//Burada girilen sayýnýn ondalýklý olmasý koþulunda aþaðýdaki çýktýyý veriyoruz.(Eðer ilk if deki koþul olmasaydý negatif ondalýklý ifadelerde bu koþul çalýþmayacaktý.
printf("Ondalýklý sayýlar koþulumuza uymamaktadýr.\n");//Burada çýktýmýzý veriyoruz.
} while ((int)tamsayi<=0||(tamsayi>0 &&(int)tamsayi!=(float)tamsayi));//Burada girilen sayýnýn tam sayý ve pozitif olmasý koþuluyla döngüden çýkartacak kodu yazýyoruz.

for(i=0; i<=tamsayi; i+=4){//Baþlangýç,koþul ve deðiþim ifadelerini tanýmlýyoruz. 
	sayac++;}//Uygun her koþulda sayacýmýz 1 artacak.
	sayac=sayac-1;//-1 olmasýnýn nedeni 0 ý da döngüye katmasýndan dolayý.
	printf("4 ile bölünen sayý adedi           = %d\n",sayac);//Bulunan sonucu kullanýcýya gösteriyoruz.

getch();//Sonucu kullanýcýya göstermek için programý bir sonraki hamleye kadar durduruyoruz.
return 0;//Program sonlandýlýmýþtýr...
	
	
}
