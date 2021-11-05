#include<stdio.h>

int main() {
	
	int tutar ;
	int bakiye=1000 ;
	int islem ;
	
	printf("Islemler;\n1)\tPara Cekme\n2)\tPara Yatirma\n3)\tHavale Yapma\n4)\tBakiye Sorgulama\n5)\tKart Iade\n");
	printf("Yapmak isteidiginiz islemi seciniz.");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
		printf("Bakiyeniz %d TL dir\n",bakiye);
		printf("Cekmek istediginiz tutari giriniz.");
		scanf("%d",&tutar);
		bakiye-=tutar ;
		if(bakiye<0){
			printf("Yetersiz bakiye.");
		}
		else {
		printf("Mevcut bakiye %d TL dir.",bakiye);
		}
		break;
		case 2:
			printf("Bakiyeniz %d TL dir\n",bakiye);
		printf("Yatirmak istediginiz tutari giriniz.");
		scanf("%d",&tutar);
		bakiye+=tutar ;
		printf("Mevcut bakiye %d TL dir.",bakiye);
		break;
		
		case 3:
			printf("Bakiyeniz %d TL dir\n",bakiye);
		printf("Havale yapmak istediginiz tutari giriniz.");
		scanf("%d",&tutar);
		bakiye-=tutar ;
		if(tutar>bakiye){
			printf("Yetersiz bakiye.");
		}
		else{
		printf("Mevcut bakiye %d TL dir.",bakiye);
		}
		break;
		
		case 4:
			printf("Bakiyeniz %d TL dir\n",bakiye);
	
		break;
		
		case 5:
		printf("Lutfen kartinizi aliniz.");
		break;
		
		default:
		printf("Lutfen gecerli bir sayi giriniz.");
		break;
	}
	
	return 0;
}
