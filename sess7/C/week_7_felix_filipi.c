#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int factor(int n){
	if(n==0){
        return(1);
    }else if(n==1){
        printf("%d",n);
    }else{
        printf("%d *",n);
    }return(n*factor(n-1));
}

int main(){
	int n;
	char pilih;
	do{
	printf("+++++++++++++++++++++++++++++++++");
	printf("\n\nWelcome to Factorial Program");
	printf("\n\n+++++++++++++++++++++++++++++++++++");
	printf("\n\nEnter an integer number:");
	scanf("%d",&n);
	printf("\nFactorial of %d is %d",n,factor(n));
	printf("\n\nPress Y to repeat= ");
	fflush(stdin);
	scanf("%s",&pilih);
}while(pilih == 'Y'||pilih=='y');
	}
	


