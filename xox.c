#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int oyun[3][3]={0};	
	int b[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};//kullanýcýný gridigi degerleri budiziye atadým
	int kisi=0;
	int i=0,j=0,genel=0,alinan=0,modu=0,kontrol=0,son=1;
	
	for(genel=0; genel<10; genel++){//forun baþlangýcý
	kontrol=0;
	printf("XOX Oyununa Hosgeldiniz\n");
	printf("\n");
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(oyun[i][j]==0) printf(" . ");
				if(oyun[i][j]==1)printf(" X ");
				if(oyun[i][j]==2)printf(" O ");
			}
			printf("\n");
		}
		
		if(son==2){printf("Oyunu [%d].Oyuncu Kazandi",kisi);break;}
		if(genel==9){printf("Oyunu Berabere Bitti\n"); break;}
		if(genel%2==0){kisi=1;}
		else{kisi=2;}
		printf("\n[%d].inci oyuncu[1] ile [9] Arasindaki Seciminiz==",kisi);
		scanf("%d",&alinan);
		
		alinan=alinan-1;
		if(alinan>-1 && alinan<9)
			{
		
					for(i=0; i<9; i++)
					{
						
						if (b[i]==alinan) {kontrol++; genel--;} //kullanýcýn ayný degeri iki kere girmedidinden emin olunuyor
					}
				
							if(kontrol==0) 
							{
								
								b[genel]=alinan; //kullanýcýnýn girdigi deger atama yapýldý
						
								if(genel%2==0){
									
									if(alinan>-1 && alinan<3) {oyun[0][alinan]=1; }
									if(alinan>2 && alinan<6)  {modu=(alinan%3); oyun[1][modu]=1;}
									if(alinan>5 && alinan<9)  {modu=(alinan%3); oyun[2][modu]=1;}
								}
								
								else{
								
									if(alinan>-1 && alinan<3) {oyun[0][alinan]=2;}
									if(alinan>2 && alinan<6)  {modu=(alinan%3);oyun[1][modu]=2;}
									if(alinan>5 && alinan<9)  {modu=(alinan%3);oyun[2][modu]=2;} 
								
								}
										for(i=0; i<3; i++){//üc secenegin yan yana gelmesi kontrol ediliyor
											
												if(oyun[i][0]==1 && oyun[i][1]==1 && oyun[i][2]==1 || oyun[i][0]==2 && oyun[i][1]==2 && oyun[i][2]==2){
													son=2; break;
												}
												if(oyun[0][i]==1 && oyun[1][i]==1 && oyun[2][i]==1 || oyun[0][i]==2 && oyun[1][i]==2 && oyun[2][i]==2){
													son=2; break;
												}
												if(oyun[0][0]==1 && oyun[1][1]==1 && oyun[2][2]==1 || oyun[0][0]==2 && oyun[1][1]==2 && oyun[2][2]==2){
													son=2; break;
												}
												if(oyun[0][2]==1 && oyun[1][1]==1 && oyun[2][0]==1 || oyun[0][2]==2 && oyun[1][1]==2 && oyun[2][0]==2){
													son=2; break;
												}
											
										}
									
								system("cls");
							}
								else {system("cls");printf("[%d]. Oyuncu Dolu Alani Sectiniz Yeniden Secim Girin\n",kisi);}
			}
			
	else{system("cls"); genel--; printf("[%d].oyuncu [1] ile [9] Arasinda Secim Gireceksiniz\n",kisi);}
	
	}//forun bitiþ parantezi
	
	getchar();
	return 0;
	
}
