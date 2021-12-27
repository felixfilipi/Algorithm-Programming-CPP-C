#include <stdio.h>
#include <stdlib.h>

int segiempat_1(int p,int l)
{
	int x,y;
	char c;
 printf("\nMasukkan simbol Segiempat  : ");
 scanf("%s",&c);
 for(x=1;x<=p;x++){
  for(y=1;y<=l;y++)
  {
		if((x==1) || (x==p) || (y==1) || (y==l))
		printf("%s",&c);
		else 
		printf(" ");
  }
  printf("\n");
 }

 return 0;
}

int segiempat_2(int p, int l)
{
	int x,y;
 for(x=1;x<=p;x++){
  for(y=1;y<=l;y++)
  {
	  if((x==1) || (x==p) ){
	  
		printf("%d",x);
		printf(" ");
		}
		else if ((y==1) || (y==l)){
			printf("%d",x);
			printf(" ");
		}
		else {
			printf("  ");
		}
  }
  printf("\n");
 }
 return 0;
}

int main()
{
	int pilih, p, l;
	char jawab;
	do{
        system("clear");
	puts("Selamat datang di program gambar SegiEmpat\nMenu Tampilan : ");
	puts("\n1. Segiempat dengan Simbol");
	puts("\n2. Segiempat degan Angka");
	
	printf("\nPilihan Anda [1/2] : ");
	scanf("%d", &pilih);
	fflush(stdin);
	printf("\nMasukkan Panjang:");
	scanf("%d",&p);
	fflush(stdin);
	printf("\nMasukkan Lebar: ");
	scanf("%d",&l);
	fflush(stdin);
	if(pilih==1)
	{
		segiempat_1(p,l);
	}
	else
	{
		segiempat_2(p,l);
	}
	printf("Apakah anda ingin mengulang?[Y/N]= ");
	fflush(stdin);
	scanf("%s",&jawab);
	} while((jawab == 'Y')||(jawab=='y'));

}
