#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char nama[100][20],asal[100][20],tujuan[100][20],loko[100][20];
int indeks1=0;

int load_data(){
	
	FILE*data;
	data = fopen("soal08.txt","r");
	while(fscanf(data, "%s %s %s %s", &nama[indeks1],&asal[indeks1],&tujuan[indeks1],&loko[indeks1])!=EOF)
	indeks1++;
	fclose(data);

    return 0;
}


int save_data(){
	FILE*data;
	data=fopen("soal08.txt","w");
	for(int b=0;b<indeks1;b++){
		if(b==0)
		fprintf(data,"%s %s %s %s",nama[b],asal[b],tujuan[b],loko[b]);
		else fprintf(data,"\n%s %s %s %s",nama[b],asal[b],tujuan[b],loko[b]);
		fclose(data);
		printf("Data Telah Disimpan!\n");
	}
    return 0;
}

int menu(){
	
		int pilih;
	puts("=================================================");
	puts("\n\t\t SELAMAT DATANG DI TRAVEL OKE");
	puts("\n=================================================");
	printf("\n\n1. Tampilkan Kereta");
	printf("\n2. Edit Kereta");
	printf("\n3. Tambah Kereta");
	printf("\n4. Save");
	printf("\n5. Exit");

    return 0;
}

void tambah(){
	printf("Data Kereta yang ingin ditambah :");
	printf("\nNama Kereta	:");
	scanf("%s",nama[indeks1]);
	printf("\nAsal		:");
	scanf("%s",asal[indeks1]);
	printf("\nTujuan		:");
	scanf("%s",tujuan[indeks1]);
	printf("\nLokomotif	:");
	scanf("%s",loko[indeks1]);
	indeks1++;
	printf("Data anda telah ditambahkan!\n\n");
}

int edit_data(){
	int data;
	printf("\n\nData yang ingin diedit:");
	scanf("%d",&data);
	printf("\nNama Kereta: %s", nama[data-1]);
	
	printf("\nAsal:%s",asal[data-1]);

	printf("\nTujuan:%s",tujuan[data-1]);
	
	printf("\nLokomotif:%s",loko[data-1]);
	
	
	printf("\n\nData kereta yang ingin diperbarui:");
	printf("\n\nNama kereta:");
	scanf("%s",nama[data-1]);
	printf("\nAsal:");
	scanf("%s",asal[data-1]);
	printf("\nTujuan:");
	scanf("%s",tujuan[data-1]);
	printf("\nLokomotif:");
	scanf("%s",loko[data-1]);
    
    return 0;
}

int cetak(){
	int i;
	puts("=================================================");
	puts("\n\t\t SELAMAT DATANG DI TRAVEL OKE");
	puts("\n=================================================");
	printf("No	|Nama Kereta		|Asal		|Tujuan		|Loko		");	
	for (int i=0;i<indeks1;i++){
	
	printf("\n\n %-2d\t| %-21s | %-13s | %-13s | %-7s\n",i+1,nama[i],asal[i],tujuan[i],loko[i]);
}
return 0;
}



int main(){
	int pilih;
	load_data();
	do{
		menu();
		do{
			printf("\nMasukkan pilihan[1-5]=");
			scanf("%d",&pilih);
		} while((pilih>5)||(pilih<1))
		;switch(pilih){
			
			case 1: cetak();
			getchar();
			break;
			
			case 2: edit_data();
			getchar();
			break;
			
			case 3: tambah();
			getchar();
			break;
			
			case 4: save_data();
			getchar();
			break;
			
			case 5: exit(0);
		
		}
		
	}while(pilih!=5);
		return 0;
}
	
	
	
	
