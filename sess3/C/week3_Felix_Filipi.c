#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void clrscr()
{
	system("@cls||clear");

}
int main()
{
	char username[50],pass[50],digit[10],acc;
	int pilih,angka,warna,uang=100,harga=89;
	printf("			Login First.... \n" );
    
    printf("\n Username: ");
    scanf("%s",&username);
	printf("\n Password: ");
	scanf("%s",&pass);
    
	if(strcmp(username,"kata")!=0 || strcmp(pass,"kata")!=0){
	    printf("\n\n Username atau Password anda salah\n\n");
    
    }else{
	clrscr();
	printf("		\n\n\n	Javanese Learning Program");
	printf("		\n\n *********************************");
	printf("\n 1.	Number");
	printf("\n 2.	Color");
	printf("\n 3.	Buy full version");
	printf("\n 4.	Exit");
	printf("\n \n Enter your choice :");
	scanf("%d",&pilih);
    }

	switch(pilih){
		case 1 :{
			clrscr();
			printf(" Number");
			printf("\n ********");
			printf("\n\n 1.ONE");
			printf("\t\t 4.FOUR");
			printf("\t\t 7.SEVEN");
			printf("\n 2.TWO");
			printf("\t\t 5.FIVE");
			printf("\t\t 8.EIGHT");
			printf("\n 3.THREE");
			printf("\t 6.SIX");
			printf("\t\t 9.NINE");
			
			printf("\n\n Enter Your Choice:");
			scanf("%d",&pilih);	
		
			switch(pilih){
			    case 1 :{		
				    printf("\t\t\tOne is Siji\n\n");
                    printf("Thank you for using this application.\n");
				    break;
                }
                case 2 :{ 
                    printf("\t\t\tTwo is Loro\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 3 :{
                    printf("\t\t\tThree is Telu\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 4 :{
                    printf("\t\t\tFour is Papat\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 5 :{
                    printf("\t\t\tFive is Lima\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 6 :{
                    printf("\t\t\tSix is Enem\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 7 :{
                    printf("\t\t\tSeven is Pitu\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 8 :{
                    printf("\t\t\tEight is Wolu\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                case 9 :{
                    printf("\t\t\tNine is Songo\n\n");
                    printf("Thank you for using this application.\n");
                    break;
                }
                default :{
                    printf("It is our of you choice. \n\nThank you for using this application\n\n");
                    break;
                }
            break;
            }
    break;}
		case 2 :{
			clrscr();
			printf(" Color");
			printf("\n ********");
			printf("\n\n 1.Black");
			printf("\t 3.Green");
			printf("\t 5.Orange");
			printf("\n 2.Blue");
			printf("\t\t 4.Purple");
			printf("\t 6.Red");			
			printf("\n\n Enter Your Choice:");
			scanf("%d",&warna);	
			
	    switch(warna){					
			case 1 :{
				printf("\t\t\tBlack is Ireng\n\n");
				printf("Thank you for using this application.\n");
				break;
			}
			case 2 :{
                printf("\t\t\tBlue is Biru\n\n");
				printf("Thank you for using this application.\n");
				break;
			}
			case 3 :{
				printf("\t\t\tGreen is Ijo\n\n");
				printf("Thank you for using this application.\n");
				break;
			}
			case 4 :{
				printf("\t\t\tPurple is Ungu\n\n");
				printf("Thank you for using this application.\n");
				break;
			}
			case 5 :{
				printf("\t\t\tOrange is Oren\n\n");
				printf("Thank you for using this application.\n");
				break;
			}
			case 6 :{
				printf("\t\t\tRed is Abang\n\n");
				printf("Thank you for using this application.\n");
                break;
			}
			
			default :{
				printf("It is out of you choice. \n\nThank you for using this application\n");
				break;
			}
		break;
        }
    break;}
	
	case 3:{
		clrscr();
		printf(" Your e-money balance = $ %d",uang);
		printf("\n\n Buy full version");
		printf("\n ****************");
		printf("\n Full version price = $%d",harga);
		printf("\n Input your e-money number [6-digit]: ");
		scanf("%s",&digit);
		if(strlen(digit)!=6)
		{
			printf("\n\nError");
		}
		else
		{
		
		uang=uang-harga;
		printf("\n Congrats!");
		printf("\n You bought successfully. Your e-money balance now = $ %d",uang);
		printf("\n\n Thank you for using this application \n");
	}
		break;
	}
	default:{
		clrscr();
		printf("Thank you for using this application\n\n");
		break;
	}

    }
return 0;
}
