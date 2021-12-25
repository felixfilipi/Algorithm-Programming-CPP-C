#include <math.h>
#include <stdio.h>

int main()
{

 int a,b,c,d ;
 float x,y;

	printf(	"                                      Math Calculator " );
	printf(	" \n                           ******************************");
	
	printf(" \n  \n Calculation of first unsorted equation");
	printf(" \n ********************************************");
	printf("\n \n            x=<sqrt<a> + b^3 - c*b / a");
	printf("\n \n where  : a= first entered number" );
	printf("\n             b= second entered number");
	printf("\n             c= third entered number");
	printf("\n             x= first unsorted equation result");
	
	printf("\n\n input a : ");
	scanf("%d",&a);
	printf("\n input b: ");
	scanf("%d",&b);
	printf("\n input c: ");
	scanf("%d" ,&c);
	
	x= (sqrt(a) + pow(b,3) - c*b / a);
	printf("\n x : %.2f",x);
	
	
	printf(" \n\n\n\n Calculation of first unsorted equation");
	printf(" \n ********************************************");
	printf("  \n        y = <d*b + x/c -a>^2 ");
	printf("\n \n where : d = fourth entered number");
	printf("     \n         y = second unsorted equation result");
	printf("\n \n input d: ");
	scanf("%d",&d);
	y = pow((d*b + x/c -a),2);
	printf("    \n      y : %.2f",y);

	return 0 ;
}
