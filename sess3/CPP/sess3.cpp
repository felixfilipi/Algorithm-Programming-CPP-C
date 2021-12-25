#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

int main(){
    
    string user, pw, digit;
    int main_choice, number_choice, color_choice; 
    int money = 100;
    const int price = 89;

    cout << "\t\t" << "Login First.";
    cout << "\n\n" << "Username : ";
    cin >> user;
    cout << "\n" << "Password : ";
    cin >> pw;
    if(user != "kata" || pw != "kata"){
        cout << "\n\n" << "Your username and password are incorrect.";
        cout << "\n\n" << "Thank you for using this application." << endl;
    }else{
        system("clear");
        cout << "\n\t\t" << "Javanese Learning Program";
        cout << "\n\t\t" << "**************************";
        cout << "\n\n" << "1. Number";
        cout << "\n" << "2. Color";
        cout << "\n" << "3. Buy full version";
        cout << "\n" << "4. Exit";
        cout << "\n\n" << "Enter your choice = ";
        cin >> main_choice;
        switch(main_choice){
            case 1:
                system("clear");
                cout << " Number";
                cout << "\n ******";
                cout << "\n\n" << "1. One";
                cout << "\t\t" << "4. Four";
                cout << "\t\t" << "7. Seven";
                cout << "\n" << "2. Two";
                cout << "\t\t" << "5. Five";
                cout << "\t\t" << "8. Eight";
                cout << "\n" << "3. Three";
                cout << "\t" << "6. Six";
                cout << "\t\t" << "9. Nine";
                cout << "\n\n" << "Enter your choice : ";
                cin >> number_choice;
                switch(number_choice){
                    case 1:
                        cout << "\n\t\t\t" << "One is Siji";
                        cout << "\n\n" << "Thank you for using this application" 
                            << "\n\n";
                        break;
                    case 2: 
                        cout << "\n\t\t\t" << "Two is Loro";
                        cout << "\n\n" << "Thank you for using this application" 
                            << "\n\n";
                        break;
                    case 3:
                        cout << "\n\t\t\t" << "Three is Telu";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 4:
                        cout << "\n\t\t\t" << "Four is Papat";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 5:
                        cout << "\n\t\t\t" << "Five is Limo";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 6:
                        cout << "\n\t\t\t" << "Six is Enem";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 7:
                        cout << "\n\t\t\t" << "Seven is Pitu";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 8:
                        cout << "\n\t\t\t" << "Eight is Wolu";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    case 9:
                        cout << "\n\t\t\t" << "Nine is Songo";
                        cout << "\n\n" << "Thank you for using this application"
                            << "\n\n";
                        break;
                    default:
                        cout << "\n" << "It is out of our choice.";
                        cout << "\n\n" << "Thank you for using our application."
                            << "\n\n";
                        break;
                }
                break;
            case 2:
                system("clear");
                cout << " Color";
                cout << "\n" << " *****";
                cout << "\n\n" << "1. Black";
                cout << "\t" << "3. Green";
                cout << "\t" << "5. Orange";
                cout << "\n" << "2. Blue";
                cout << "\t\t" << "4. Purple";
                cout << "\t" << "6. Red";
                cout << "\n\n" << "Enter your choice : ";
                cin >> color_choice;
                switch(color_choice){
                    case 1:
                        cout << "\n\t\t" << "Black is Ireng";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    case 2:
                        cout << "\n\t\t" << "Blue is Biru";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    case 3:
                        cout << "\n\t\t" << "Green is Ijo";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    case 4:
                        cout << "\n\t\t" << "Purple is Ungu";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    case 5:
                        cout << "\n\t\t" << "Orange is Oren";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    case 6:
                        cout << "\n\t\t" << "Red is Abang";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                    default:
                        cout << "\n" << "It is out of our choice.";
                        cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                        break;
                }
                break;
            case 3:
                system("clear");
                cout << "Your e-money Balance = $ " << money;
                cout << "\n\n" << "But full version" << endl;
                cout << "****************";
                cout << "\n\n" << "Full version price = $" << price << endl;
                cout << "Input your e-money number [6 digit]: ";
                cin >> digit;
                if(digit.length() > 6 || digit.length() < 6){
                    cout << "\n\n" << "Your e-money number should be 6 digit."
                        << endl;
                    break;
                }else{
                    cout << "\n\n" << "Congrats!!" << endl;
                    cout << "You bought successfully Your e-money" <<
                        " balance now = $ " << money - price;
                    cout << "\n\n" << "Thank you for using this application."
                            << "\n\n";
                    break;
                }
            default:
                system("clear");
                cout << "Thank you for using this application." << "\n\n";
                break;
        }
    }
}
