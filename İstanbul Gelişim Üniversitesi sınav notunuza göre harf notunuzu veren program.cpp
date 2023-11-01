//Ýstanbul Geliþim Üniversitesi sýnav notunuza göre ortalama hesaplayan, harf notunuzu ve katsayýnýzý veren program!

#include<stdio.h>

int main()
{
	float vize,final,odev,quiz,ortalama;
	char yeniden='e';
	
	while (yeniden=='e')
	{
		printf("Vize notunuzu giriniz: ");
		scanf("%f",&vize);
		
		printf("Final notunuzu giriniz: ");
		scanf("%f,",&final);
		
		printf("Odev notunuzu giriniz: ");
		scanf("%f",&odev);
		
		printf("Quiz notunuzu giriniz: ");
		scanf("%f",&quiz);
		
		ortalama=final/2+vize*3/10+odev/10+quiz/10;
		
		if(ortalama>=90 && ortalama<=100)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: AA ve Katsayiniz 4.00 (GECTINIZ!)",ortalama);
		}
		else if(ortalama>=85 && ortalama<90)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: BA ve Katsayiniz 3.50 (GECTINIZ!)",ortalama);
		}
		else if(ortalama>=75 && ortalama<85)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: BB ve Katsayiniz 3.00 (GECTINIZ!)",ortalama);
		}
		else if(ortalama>=65 && ortalama<75)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: CB ve Katsayiniz 2.50 (GECTINIZ!)",ortalama);
		}
		else if(ortalama>=60 && ortalama<65)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: CC ve Katsayiniz 2.00 (GECTINIZ!)",ortalama);
		}
		else if(ortalama>=50 && ortalama<60)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: DC ve Katsayiniz 1.50 (Sartli Gectiniz!)",ortalama);
		}
		else if(ortalama>=45 && ortalama<50)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: DD ve Katsayiniz 1.00 (Sartli Gectiniz!)",ortalama);
		}
		else if(ortalama>=40 && ortalama<45)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: FD ve Katsayiniz 0.50 (KALDINIZ!)",ortalama);
		}
		else if(ortalama>=0 && ortalama<40)
		{
			printf("Ortalamaniz: %.2f, Harf notunuz: FF ve Katsayiniz 0.00 (KALDINIZ!)",ortalama);
		}
		else
		{
			printf("Lutfen Notlarinizi Dogru Giriniz!");
		}
		printf("\n\tYeniden Islem Yapmak Ister misiniz ?(e/h): ");	
	    	scanf("%s",&yeniden);
	    
	    if(yeniden=='h')
	    {
	    	printf("\n\t\tBASARILAR!!!");
	    	
	    	return 0;
		}
	}
}
