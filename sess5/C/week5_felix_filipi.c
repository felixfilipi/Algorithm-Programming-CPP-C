#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int matrix[5][5];
	int b1,b2,k1,k2,i,j,jawab,z;
	srand(time(0));
	
	puts("\t\tGuess Multiplication Random Matrix");
	puts("*******************************************************************");
	
	for(int i=0;i<5;i++){
		for(j=0;j<5;j++){
			matrix[i][j]=rand()%101;
			printf("\t[%d][%d]=%d",i,j,matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	b1=rand()%5;
	b2=rand()%5;
	k1=rand()%5;
	k2=rand()%5;
	printf("\n\n What's the result of angka[%d][%d] times angka [%d][%d]?=",b1,k1,b2,k2);
	scanf("%d",&jawab);
	z=matrix[b1][k1]*matrix[b2][k2];
	if(jawab!=z){
		printf(" You are wrong");
	}
	else printf(" You are brilliant");
	
	puts("\n\n Thank You for using this application");
	getchar();
}

