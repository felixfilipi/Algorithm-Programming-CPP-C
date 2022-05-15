#include<stdio.h>
#include<string.h>
#include<stdlib.h>

	
	struct data{
		
		int price;
		int available;
		char kode[10];
	};
	
	struct data dataa[4]= {
	{ 7500, 140,"SA001"},{5000, 90,"SA004"},{8000, 120, "SA009"	},{ 9500, 80, "SA012"}};

	
	int sell(){
		int i,kuantitas,loop;
		char pilih[5];
	do{
		printf("\t Input Stationery Code [5 char]:");
		scanf("%s",pilih);
		if(strcmp(pilih, "SA001") == 0){	//Menggunakan satu satu karena sempat terlanjur bingung (bisa juga dianggap cara lain)
		loop=0;								//tetapi sudah menggunakan for pada fungsi add
		do{
		printf("\t Input Quantity [0..120]:");
		scanf("%d",&kuantitas);
		}while(kuantitas>120 | kuantitas<0);
		printf("\n Total Price is : Rp%d,- X %d = Rp %d,-",dataa[0].price,kuantitas,dataa[0].price*kuantitas);
		dataa[0].available = dataa[0].available - kuantitas;
		if(dataa[0].available<0){
			dataa[0].available= dataa[0].available + kuantitas;
			printf("\n\n ................................................................The quantity of stationery is not enough............................................................... ");
		}
		
		printf("\n\n________________________________________________________________________________Thank You_______________________________________________________________________________");
		
		
		
		}else if(strcmp(pilih, "SA004") == 0){	//Menggunakan satu satu karena sempat terlanjur bingung (bisa juga dianggap cara lain)
		loop=0;								//tetapi sudah menggunakan for pada fungsi add
		do{
		printf(" Input Quantity [0..120]:");
		scanf("%d",&kuantitas);
		}while(kuantitas>120 | kuantitas<0);
		printf("\n Total Price is : Rp%d,- X %d = Rp %d,-",dataa[0].price,kuantitas,dataa[0].price*kuantitas);
		dataa[1].available = dataa[1].available - kuantitas;
		if(dataa[1].available<0){
			dataa[1].available= dataa[1].available + kuantitas;
			printf("\n\n ................................................................The quantity of stationery is not enough............................................................... ");
		}
		
		printf("\n\n________________________________________________________________________________Thank You_______________________________________________________________________________");
	
		}else if(strcmp(pilih, "SA009") == 0){	//Menggunakan satu satu karena sempat terlanjur bingung (bisa juga dianggap cara lain)
		loop=0;								//tetapi sudah menggunakan for pada fungsi add
		do{
		printf(" Input Quantity [0..120]:");
		scanf("%d",&kuantitas);
		}while(kuantitas>120 | kuantitas<0);
		printf("\n Total Price is : Rp%d,- X %d = Rp %d,-",dataa[0].price,kuantitas,dataa[0].price*kuantitas);
		dataa[2].available = dataa[2].available - kuantitas;
		if(dataa[2].available<0){
			dataa[2].available= dataa[2].available + kuantitas;
			printf("\n\n ................................................................The quantity of stationery is not enough............................................................... ");
		}
		
		printf("\n\n________________________________________________________________________________Thank You_______________________________________________________________________________");
		
		}else if(strcmp(pilih, "SA012") == 0){	//Menggunakan satu satu karena sempat terlanjur bingung (bisa juga dianggap cara lain)
		loop=0;								//tetapi sudah menggunakan for pada fungsi add
		do{
		printf(" Input Quantity [0..120]:");
		scanf("%d",&kuantitas);
		}while(kuantitas>120 | kuantitas<0);
		printf("\n Total Price is : Rp%d,- X %d = Rp %d,-",dataa[0].price,kuantitas,dataa[0].price*kuantitas);
		dataa[3].available = dataa[3].available - kuantitas;
		if(dataa[3].available<0){
			dataa[3].available= dataa[3].available + kuantitas;
			printf("\n\n ............................................................... The quantity of stationery is not enough .............................................................. ");
		}
		
		printf("\n\n________________________________________________________________________________Thank You_______________________________________________________________________________");
	
		}else
			{
				loop=1;
			printf("\n -------------------------------------------------------------------- The Stationery Code doesn't exist ---------------------------------------------------------------- \n\n");
			}
	}while(loop == 1);
	
}

	int search(struct data ptr[],char *code){
	int i;
	for(i = 0 ; i < 4 ; i++){
	if(strcmp(ptr[i].kode,code) == 0){return i;}
	}return -1;
}
	
	
	int add(){
		int i,kuantitas,indeks;
		char kode[9];
		fflush(stdin);
		do{
		printf("\t Input Stationery Code [5 char]:");
		scanf("%s",kode);
		
		
		if(search(dataa,kode) == -1){
		 printf("\n -------------------------------------------------------------------- The Stationery Code doesn't exist ---------------------------------------------------------------- ");
		}else{
		indeks = search(dataa,kode);
		do{
		printf("\t Input Quantity [1..10] : ");
		scanf("%d",&kuantitas);
		if(kuantitas>10|kuantitas<0){
			printf("\n x---------------------------------------------------------------------- Sorry, only between 1...10 ------------------------------------------------------------------x \n\n");
		}
		}while(kuantitas>10|kuantitas<0);
		dataa[indeks].available = dataa[indeks].available + kuantitas;
		printf("\n\n --------------------------------------------------------------------------- Adding Stock Success --------------------------------------------------------------------");
		}
		}while(search(dataa,kode) == -1);
}

int main(){
	int pilih;	
	int i;
	
	do{
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\t\t\t\t\t\t\t\t\tBAGOES Stationery Store CASHIER");
	printf("\n________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\t====================================================================================================================");
	printf("\n\t| No      | Stationery Code             | Stationary Name                  |  Available           | Price          |");
	printf("\n\t====================================================================================================================");
	printf("\n\t| 01.     | %s                       | Pencil                           |                   %d|      Rp  %d,-|",dataa[0].kode,dataa[0].available,dataa[0].price);
	printf("\n\t| 02.     | %s                       | Eraser                           |                    %d|      Rp  %d,-|",dataa[1].kode,dataa[1].available,dataa[1].price);
	printf("\n\t| 03.     | %s                       | Pen                              |                   %d|      Rp  %d,-|", dataa[2].kode,dataa[2].available,dataa[2].price);
	printf("\n\t| 04.     | %s                       | Notes                            |                    %d|      Rp  %d,-|",dataa[3].kode,dataa[3].available,dataa[3].price);
	printf("\n\t====================================================================================================================");
	printf("\n\n________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n\t 1. Sell");
	printf("\n\t 2. Add Stock");
	printf("\n\t 3. Exit");	
	printf("\n\n Input choice: ");
	scanf("%d",&pilih);
	printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
	
	
	switch(pilih){
		case 1: { 
			sell();
			break;
		}
		case 2: {
			add();
		
			break;
		}
		case 3:{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t\t\t\t\t\tTHANK YOU FOR COMING");
			exit(0);
			break;
		}
	}
	}while(pilih < 3 | pilih > 1);
}

