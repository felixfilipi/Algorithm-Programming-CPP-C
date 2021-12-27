#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

void clrscr()
{
	system("clear");
}

void red(){
    printf("\033[1;31m");
}

void green(){
    printf("\033[0;32m");
}

void orange(){
    printf("\033[0;33m");
}

void blue(){
    printf("\033[0;34m");
}

void purple(){
    printf("\033[0;35m");
}

int main()
{
	char username[50],pass[50],digit[10],ulang[1],back,akun,signup,sign,id[50],pw[50];
	int pilih,angka,warna,uang=100,harga=89;


akun:
    clrscr();
	puts("\t\t\t\t Welcome to Javanese Learning Program");
	printf("\n\n DO YOU HAVE AN ACCOUNT? [Y/N]= ");
	scanf("%s",&akun);
	if(akun=='Y' || akun=='y'){
        goto sudah;
    }else{
        goto signup;
    }

signup:
    clrscr();
	puts("\n\t\t\t\t SIGN UP");
	puts("***************************___________________*******************************");
	printf(" \n\n INPUT YOUR USERNAME= ");
	scanf("%s",username);
	printf("\n\n INPUT YOUR PASSWORD= ");
	scanf("%s",pass);
	goto login;

login:
    do{
	clrscr();
	printf("\a			Javanese Learning Program" );
	printf("\n\t\n\t\t\t\t Login\n");
	printf("\n\n Username:");
	scanf("%s",&id);
	printf("\n\n Password:");
	scanf("%s",&pw);

	}while(strcmp(id,username)!=0||strcmp(pw,pass)!=0);	
	
    goto coba;

coba:
    do{

sudah:	
    do{
	clrscr();
	printf("\a			Javanese Learning Program" );
	printf("\n\t\n\t\t\t\t Login\n");
	printf("\n\n Username:");
	scanf("%s",&username);
	printf("\n\n Password:");
	scanf("%s",&pass);
	
    }while(strcmp(username,"kata")!=0||strcmp(pass,"kata")!=0);	
	
jump:
        clrscr();
        printf("		\n\n\n	Javanese Learning Program");
	    printf("		\n\n *********************************");
	    printf("\n 1.	Number");
    	printf("\n 2.	Color");
	    printf("\n 3.	Buy full version");
	    printf("\n 4.	Exit");
	    printf("\n \n Enter your choice :");
	    scanf("%d",&pilih);
    }while((pilih>4) || (pilih<=0));

    switch(pilih){
        case 1 :
                    do{
                        do{
                            clrscr();
                            printf("Number");
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
                            scanf("%d",&angka);	
                        }while((pilih>9) || (pilih<=0));
                        
                        switch(pilih){
                            case 1 :
                                printf(" \n One is Siji");
                                printf("\n\n Press R to continue= ");
                                fflush(stdin);		
                                scanf("%s",&ulang);

                                if(ulang=="R"){
                                    break;
                                }else{
                                    goto jump;
                                }
                                    
                            case 2 :{
                            
                                        printf(" \n Two is Loro");
                                        printf("\n\n Press R to continue= ");

                                        scanf("%s",&ulang);

                                        if(ulang=="R"){
                                            continue;
                                        }else{
                                            goto jump;
                                        }
                                        break;
                                    }
                        case 3 :{
                            printf("\n Three is Telu");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);	
                            scanf("%s",&ulang);
                        if(ulang=="R"){
                            continue;
                        }else{
                            goto jump;
                        }

                        break;
                        }
                        case 4 :{
                            printf("\n Four is Papat");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }
                        case 5 :{
                            printf("\n Five is Lima");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }
                        case 6 :{
                            printf("\n Six is Enem");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }
                        case 7 :{
                            printf("\n Seven is Pitu");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }
                        case 8 :{
                            printf("\n Eight is Wolu");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }case 9 :{
                            printf("\n Nine is Songo");
                            printf("\n\n Press R to continue= ");
                            fflush(stdin);
                            scanf("%s",&ulang);
                            if(ulang=="R"){
                            continue;
                            }else{
                            goto jump;
                            }
                            break;
                        }
                        default :
                                continue;

                        }

                        break;

                    }while(ulang=="R");	

                    break;

		case 2 :
			do{
				do{

			clrscr();
			printf("Color");
			printf("\n ******************");
			printf("\n\n 1.Black");
			printf("\t 3.Green");
			printf("\t 5.Orange");
			printf("\n 2.Blue");
			printf("\t\t 4.Purple");
			printf("\t 6.Red");			
			printf("\n\n Enter Your Choice:");
			scanf("%d",&warna);	
			 
				} while((warna>6) || (warna<=0));

                switch(warna){
				
			case 1 :{
				printf("\n Black is Ireng");
				printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
			case 2 :
			{	
                blue();
				printf("\n Blue is Biru");
				printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
            case 3 :{
                green();
				printf("\n Green is Ijo");
				printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
		case 4 :{
                purple();
				printf("\n Purple is Ungu");
				printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
        case 5 :{
				orange();
                printf("\n Orange is Oren");
                printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
        case 6 :{
				red();
                printf("\n Red is Abang");
				printf("\n\n Press R to continue= ");
				fflush(stdin);
				scanf("%s",&ulang);
				if(ulang=="R"){
				continue;
                }else{
				goto jump;
                }
				break;
			}
				default :
                continue;
                break;

                
                break;}
                break;
    }while(ulang=="R");
				
		case 3:{
		clrscr();
		versi:
		puts("\t\t\t\t\t\tJavanese Learning Program");
		printf("\t\t\t\t\t\t\t\t\t\t\tYour e-money balance= $%d",uang);
		printf("\n\n\n \t\t\t\t\t\t    Buy Full Version");
		printf("\n\n *********************************************************************************************************************");
		printf("\n\n Full Version Price = $%d",harga);
		do
		{
		printf("\n\n \aInput your e-money number [6-digit]:");
		scanf("%s",&digit);
		}while(strlen(digit)!=6);

		uang=uang-harga;
		printf("\n\n\t\t\t CONGRATS!!!!!!!!!");
		printf("\n\n You bought successfully, Your e-money balance now= $%d",uang);
		printf("\n\n Thank you for using this application\n\n");
			system("pause>nul");
			printf("\n\n Press Enter to ADVANCED BUY");
			printf("\n\n Press B to BACK= ");
			
			fflush(stdin);
			scanf("%s",&back);
			if(back=='B'){
			goto jump;
            }else{
			clrscr();
            }goto versi;
	}
                    }
}
