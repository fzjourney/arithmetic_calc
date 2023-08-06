#include <stdio.h>
#include <string.h>

int main(){
	printf("Nama\t: Muhammad Feiza Zharfan Priyatnadi\n");
	
	char ID1[500],OP;
	printf("Penggunaan Kalkulator\n");
	printf("1. Bilangan aritmatika mengandung (+ - * /), contoh (a + b)\n");
	printf("2. Input 'x' (tanpa tanda kutip) untuk keluar\n\n"); 
	printf("Masukkan bilangan : "); 
	scanf("%s",&ID1);
	getchar();
	
	while (ID1[0]!='x') //Selagi tidak samadengan x maka program akan terus berjalan
	{
		int ID2,H=0; 
		float n,x=0,Hf,xf;
		//x merupakan variabel untuk menampung angka inputan ID1 
		//n merupakan variabel jumlah
		//H merupakan variabel format luaran
		scanf("%c%d",&OP,&ID2);
		getchar();
		
		int i;
		if(ID1[0]>=48 && ID1[0]<=57) //48 sampai 57 adalah ASCII DARI 0-9
		{
			for(i=0;i<strlen(ID1);i++)
			{
				x=x+(ID1[i]-48);
				if(i<strlen(ID1)-1)
				{
					x=x*10; //Jika angka pertama yang dimasukkan lebih dari 9 maka dikalikan, misalkan angka = 50, tanpa ini akan terbaca 5 saja
				}
			}
		}else x=n;
		
		if(OP=='+') //Penjumlahan
		{
			H=x+ID2;
			printf("Hasil dari penjumlahan = %d\n",H);
			n=H;	// agar dapat mengambil angka terakhir yang didapat
		}
		else if(OP=='-') //Pengurangan
		{
			H=x-ID2;
			printf("Hasil dari pengurangan = %d\n",H);
			n=H;
		}
		else if(OP=='*') //Perkalian
		{
			H=x*ID2;
			printf("Hasil dari perkalian = %d\n",H);
			n=H;
		}
		else if(OP=='/') //Pembagian
		{
			xf=x;
			Hf=xf/ID2;
			printf("Hasil dari pembagian = %.2f\n",Hf);
			n=Hf;
		}
		scanf("%s",&ID1); //Agar angka n dapat dimasukkan kedalam operasi aritmatika
		getchar();
	}
	if (ID1[0]='x'){
		printf("Terima kasih sudah memakai kalkulator kami");
	}
	return 0;
}
