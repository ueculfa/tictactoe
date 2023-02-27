#include <stdio.h>

int main()
{
	//Deðiþkenleri  ve dizileri tanýmladým.	
    int oyuncu = 1, i = 0, secim;
	
	char kutu[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    
	char sonuc;
    
    //(printf) koduyla oyunun baþlýðýný tanýmladým.
    printf("\n\n\t/--------///-----*** Tic Tac Toe ***-----///--------/\n\n");
	
	//Kulanýcý isimlerini tutan (char) koduyla tanýmladým.
	char birincioyuncu[10],ikincioyuncu[10];
	
	//Oyun ekranýný ve kullanýcýnýn seçim yapabilmesi için kutularýn içini sayý ile tanýmladým.
	
	printf("\t\t  %c  |  %c  |  %c \n", kutu[1], kutu[2], kutu[3]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |     \n");
	printf("\t\t  %c  |  %c  |  %c \n", kutu[4], kutu[5], kutu[6]);
	printf("\t\t_____|_____|_____\n");
	printf("\t\t     |     |     \n");
	printf("\t\t  %c  |  %c  |  %c \n", kutu[7], kutu[8], kutu[9]);
	printf("\t\t     |     |     \n\n");
	
	//Oyuncularýn  isimlerini aldým.
	printf("birincioyuncu ismini giriniz (X): ");
	scanf("%s",birincioyuncu);
	printf("ikincioyuncu ismini giriniz (O) : ");
	scanf("%s",ikincioyuncu);
	
	//Ekraný temizlemek için cmd kodunu kullandým.
	system("cls");
	
	/*
	Oyun içi seçimler olsun diye ( do while) döngüsünü kullandým.
	Sürekli olsun diye koþulu 5 yaparak yani 0 dýþýnda  int bir deðeri yazarak sonsuz döngüye koyduk.  
	*/
    do
    {
    	//Oyun doðru devam ettiði sürece ekraný yeþil tutmak istedim.
    	system ("color A");
    	//Oyun ekraný.
        printf("\n\t\t   %s(X)  -  %s(O)\n\n",birincioyuncu,ikincioyuncu);
	    
		
		printf("\t\t  %c  |  %c  |  %c \n", kutu[1], kutu[2], kutu[3]);
		printf("\t\t_____|_____|_____\n");
		printf("\t\t     |     |     \n");
		printf("\t\t  %c  |  %c  |  %c \n", kutu[4], kutu[5], kutu[6]);
		printf("\t\t_____|_____|_____\n");
		printf("\t\t     |     |     \n");
		printf("\t\t  %c  |  %c  |  %c \n", kutu[7], kutu[8], kutu[9]);
		printf("\t\t     |     |     \n\n");
		
		//Oyuncu seçimlerini aldým.

		
        oyuncu = (oyuncu % 2) ? 1 : 2;
        printf("oyuncu %s, hangi kutuyu oynamak istiyorsaniz kutunun icindeki sayiyi girin:  ",oyuncu%2?birincioyuncu:ikincioyuncu);
        scanf("%d", &secim);
		// Sonuç deðiþkeni içerisine kullanýcý sýrasýna göre X veya O atadým. 
        sonuc = (oyuncu == 1) ? 'X' : 'O';
		
		//Oyuncu seçimlerini kontrol ettiðimiz ayný zamanda oyuncu seçim yaptýðý kutunun boþ olduðunu kontrol ettiðimiz bir  (if) yapýsý kullandým. 	
        if (secim == 1 && kutu[1] == '1')
            kutu[1] = sonuc;
            
        else if (secim == 2 && kutu[2] == '2')
            kutu[2] = sonuc;
            
        else if (secim == 3 && kutu[3] == '3')
            kutu[3] = sonuc;
            
        else if (secim == 4 && kutu[4] == '4')
            kutu[4] = sonuc;
            
        else if (secim == 5 && kutu[5] == '5')
            kutu[5] = sonuc;
            
        else if (secim == 6 && kutu[6] == '6')
            kutu[6] = sonuc;
            
        else if (secim == 7 && kutu[7] == '7')
            kutu[7] = sonuc;
            
        else if (secim == 8 && kutu[8] == '8')
            kutu[8] = sonuc;
            
        else if (secim == 9 && kutu[9] == '9')
            kutu[9] = sonuc;
            
        else
        {
        	
        	//else bloðunu oyuncu default bir deðer girdiðinde  yazýsýný yazdýrdým.
            printf("----*** Hatali islem ***---- \n");
            oyuncu--;
            //Hatalý sayý yazdýðýnýzda her þeyin kýrmýzý olarak hatalý olduðunu yapmak istedim.
            system ("color 4");
            
            //Konsol ekranýnda tutarak enter tuþunun komutunu bekleyerek kodun çalýþmasýný saðlýyor.
            getch();
            
        }
        
        //Ekraný temizlemek için cmd kodunu kullandým.
		system("cls");
		
		
		//Oyunun kazanma durumlarýný (if) yapýsýyla kontrol ettim ve kazanma durumu varsa (break) anahtar kelimesiyle döngüyü kýrdým. 
		
	    if (kutu[1] == kutu[2] && kutu[2] == kutu[3]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[4] == kutu[5] && kutu[5] == kutu[6]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[7] == kutu[8] && kutu[8] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[1] == kutu[4] && kutu[4] == kutu[7]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}    
	    else if (kutu[2] == kutu[5] && kutu[5] == kutu[8]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}   
	    else if (kutu[3] == kutu[6] && kutu[6] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}
	    else if (kutu[1] == kutu[5] && kutu[5] == kutu[9]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
		}    
	    else if (kutu[3] == kutu[5] && kutu[5] == kutu[7]){
	    	printf("\n\nTebrikler %s Kazandiniz!",oyuncu%2?birincioyuncu:ikincioyuncu);	
	    	break;
	    }
	    
	    //Oyunun beraberlik durumunu (else if) bloðuyla kutularýn dolu olduðunu anlayýp ve kazanma durumu da olmadýðýndan beraberlik durumunu bu yapýyla anlýyoruz. 
	    
		else if (kutu[1] != '1' && kutu[2] != '2' && kutu[3] != '3' && kutu[4] != '4' 
		&& kutu[5] != '5' && kutu[6] != '6' && kutu[7]  != '7' && kutu[8] != '8'&& kutu[9] != '9')
		{
			i++;
			
			//Oyun iki defa beraberlik olduðunda oyunu bitiriyor.
			if(i==2){
				printf("\n\nOyun Berabere Bitti");
				break;
			}
			//Beraberlik durumunda tic tac toe oyun tablosunun sýfýrlayarak yeni oyununa yeni bir tabloyla baþlamamýzý saðlýyor.
			kutu[1] = '1';kutu[2] = '2';kutu[3] = '3';kutu[4] = '4';kutu[5] = '5';kutu[6] = '6';kutu[7] = '7';kutu[8] = '8';kutu[9] = '9';	
			printf("\n\nBerabere Tekrar Oynayin");
			
			//Konsol ekranýnda tutarak enter tuþunun komutunu bekleyerek kodun çalýþmasýný saðlýyor.
			getch();
			
			//Ekraný temizlemek için cmd kodunu kullandým.
			system("cls");
		}
		//Oyuncu sýrasý deðiþsin diye bu kodu kullandým.
        oyuncu++;
        
    }while (5);
}
